#include <stdio.h>
int  shift_keystr(char keystr){
    char alphabet[27] = {"abcdefghijklmnopqrstuvwxyz"};
    static int shift = 0 ;
    for (int i = 0; i < 26; i++){
        if (keystr == alphabet[i]){
            shift = i;
            break;
        }
    }
    return shift ;
}
char shiftchar(char moji,int shiftnum){//変換したい文字,ずらしたい数
    static int shift = 0;
    char cipher = '\0' ;//シフト後の出力する文字
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
    char str, key;
    for (int i = 0; i < 10; i++){
    str = getchar();
    key = getchar();
        
    printf("%cを%cで暗号化すると", str, key);
    printf("%c = %c\n", str, shiftchar(str ,shift_keystr(key)));
        // 〜入力バッファーにはenterがカウントされている状態。〜
    while ((key=getchar()) != '\n');//バッファークリア
        /*'\n'になるまでgetchar()を繰り返すことで関数を入力待ちにする。
         このプログラムの場合、str、keyには’A’’B’’\n’の3つが待機し、ABは入力されenterが待機状態になる。
         この時、次のループではenter、a、sの順に待機しているため実行結果がおかしくなってしまう。*/
        
    }
    return  0;
}

