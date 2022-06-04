#include <stdio.h>
int main(void){

    int a = 0, b = 1, c, term;

    printf("第何項を求めますか？\n");
    scanf("%d", &term);

    if (term > 1){
        for (int i = 2; i < term; i++){//初項を除いているのでi = 2
            c = b + a;    //三項間漸化式
            a = b;    //項をずらす
            b = c;
        }
        printf("%d\n", b);
    }
    else//入力が1なら初項aを表示。
        printf("%d\n", a);

    return 0;
}
