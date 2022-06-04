#include <stdio.h>
int main(void){
    int a, b, r;

    printf("最大公約数を求める数2つ入力。：a > b \n");
    scanf("%d%d", &a,&b);

    while(b != 0){
        r = a % b ;
        a = b;
        b = r;
    }
    printf("最大公約数は%dです。\n", a);
        
    return 0;
}
