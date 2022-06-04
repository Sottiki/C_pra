/*再帰下降構文分析*/

// 抽象構文木のノードの種類
typedef enum {
	ND_ADD, // +
	ND_SUB, // -
	ND_MUL, // *
	ND_DIV, // /
	ND_NUM, // 整数
} NodeKind; 
typedef struct Node Node;

// 抽象構文木のノードの型
struct Node {
	NodeKind kind;	//ノードの型
	Node *l_hside;	//左辺
	Node *r_hside;	//右辺
	int val;		// kind がND_NUMの場合のみ使う
};

//ノードを生成する関数を２種類定義する
//二項演算子と整数の２種類

/* 演算子の時 */
Node *new_node(NodeKind kind, Node *l_hside, Node *r_hside) {
	Node *node = calloc(1, sizeof(Node));
	node->kind = kind;
	node->l_hside = l_hside;
	node->r_hside = r_hside;
	return node;
}

/* 整数の時 */
Node *new_node_num(int val) {
	Node *node = calloc(1, sizeof(node));
	node->kind = ND_NUM;
	node->val = val;
	return node;
}

//パーサを定義
// expr() 
Node *expr() {
	Node *node = mul();

	for ( ; ; ) {
		if (consume('+'))
			node = new_node(ND_ADD, node, mul());
		else if (consume('-'))
			node = new_node(ND_SUB, node, mul());
		else
			return node;
	}
}
//mul()
Node *mul() {
	Node *node = primary();

	for ( ; ; ) {
		if (consume('*'))
			node = new_node(ND_MUL, node, primary());
		else if (consume('/'))
			node = new_node(ND_DIV, node, primary());
		else
			return node;
	}
}

Node *primary() {
	//次のトークンが"("なら "( expr() )"が来るはず
	if (consume('(')) {
		Node *node = expr();
		expect(')');
		return node;
	}
	// そうでなければ整数が来るはず
	return new_node_num(expect_number());
}

/* x86-64における、スタックマシンをレジスタマシンで再現した関数 */
//スタックマシンをコンパイルする

void gen(Node *node) {
	if (node->kind = ND_NUM) {
		printf("	push %d\n", node->val);
		return;
	}


	gen(node->l_hside);
	gen(node->r_hside);

	printf("	pop rdi\n");
	printf("	pop rax\n");

	switch (node->kind) {
		case ND_ADD:
			printf("	add rax, rdi\n");
			break;
		case ND_SUB:
			printf("	sub rax, rdi\n");
			break;
		case ND_MUL:
			printf("	imul rax, rdi\n");
			break;
		case ND_DIV:
			printf("	cqo\n");
			printf("	idiv, rdi\n");//符号あり徐算
			break;
	}

	printf("	push rax\n");
}