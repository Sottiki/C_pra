#include <stdio.h>
int main(void){

    int num, count;

    do{
        printf("整数を入力してください。\n");
        scanf("%d", &num);

        if(num > 0)
        {
            for (int i = 0; i <= num; i++){
                count = num - i ;
                printf("%d\n", count);
                
            }
        }

        else if(num < 0)
        {
            for (int i = 0; i <= -num; i++){
            count = num + i ;
            printf("%d\n", count);
            }
        }

    }while(num != 0);

    return 0;
}
