
#include <stdio.h>

//定義
char shiftchar(char moji,int shiftnum){//変換したい文字,ずらしたい数
    int shift;
    char cipher;//シフト後の出力する文字
    char alphabet[27] = {"abcdefghijklmnopqrstuvwxyz"};

    for (int i = 0; i < 26; i++){
        if (moji == alphabet[i]){//一致する文字を探す
            shift = (shiftnum + i) % 26 ;//長さをこえた場合も考慮できる。
            cipher = alphabet[shift];//余りの性質上、26にならないのでNULLを避けられる。
        }
    }

    return cipher;
    
}
int main(void){
    char str;

    printf("変換したい小アルファベットを入力してください。\n");
    str = getchar();
    printf("%c = %c\n",str, shiftchar(str,1));//1つシフト。
    printf("%c = %c\n",str, shiftchar(str,26));//アルファベットを一周した。
    printf("%c = %c\n",str, shiftchar(str,27));//一周＋１
    printf("%c = %c\n",str, shiftchar(str,13));
    return 0;
}
