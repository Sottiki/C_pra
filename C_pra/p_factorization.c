#include <stdio.h>
int main(void) {

    int num;

    printf("整数を入力してください。\n");
    scanf("%d",&num);
    printf("%d = ", num);
    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            while(num % i == 0){
                printf("*%d", i);
                num = num / i;
            }
        }
    }
    printf("\n");
    return 0;
}

