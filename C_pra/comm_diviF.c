#include <stdio.h>
int main(void){
    int a, b, r;

    printf("最大公約数を求める数2つ入力。：a > b \n");
    scanf("%d%d", &a,&b);

    for (int i = 0; i < 10; i++){
        r = a % b ;
        a = b;
        b = r;
        if (b == 0){
            printf("最大公約数は%dです。\n", a);
            break;
        }
    }
    return 0;
}
