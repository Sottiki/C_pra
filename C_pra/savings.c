#include <stdio.h>
int main(void){
    
    int sum = 1;
    int a = 0;
    
    printf("一日目は1¥\n");
    for( int i = 2; i < 10000 ;i++){
        sum = sum + sum;
        a = a + sum;
        printf("%d日目、%d円\n",i,sum);
      
        if (a >= 1000000)
        {
            i = 9999;
            a = a + 1;
        }
        printf("合計貯金額、%d\n",a);    
    }
    return 0;
}
