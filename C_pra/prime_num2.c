#include <stdio.h>
int main(void){
    int num;

    printf("正の整数を入力してください。\n");
    scanf("%d",&num);
    for (int i = 2; i < num; i++){
    //その数自身の手前までで割り切れなければ良い
        if (num % i == 0){
                printf("素数でない。\n");
                return 0;
                //ここで戻り値を返して終わる。
        }
    }
    printf("素数である。\n");
    //無事に抜けられた＝ループ内に因数なし
    return 0;
}

