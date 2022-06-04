#include <stdio.h>
int main(void)
{
    int num ,i;
    float sum = 0;
    float avr ;
    
    printf("数値を10ko入力してください。¥n");
    for ( i = 1; i <= 10; i++)
    {
        scanf("%d",&num);
        sum = sum + num;
    }
    avr = sum/10;
    
    printf("テストの平均は%f",avr);
    
    return 0;
}

