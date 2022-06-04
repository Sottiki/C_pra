#include <stdio.h>
int main(void)
{
    int j ;
    int num;
    int eve = 0;
    int odd = 0;
    int neg = 0;
    
    printf("何個入力しますか？\n");
    scanf("%d",&j);
    printf("数値を入力してください。\n");
    
    for (int i = 0; i < j; i++)
    {
        scanf("%d",&num);
        if(num<0)
            neg = neg + 1;
        if(num%2 == 0)
            eve = eve + 1;
        else
            odd = odd + 1;
    }
    
    printf("偶数　= %d\n",eve );
    printf("奇数　= %d\n",odd );
    printf("負の数　= %d\n", neg);
    
    return 0;
}
