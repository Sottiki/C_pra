#include <stdio.h>

int data3(int num){//データの個数
    int data,len = num;
    double avr = 0,sum = 0;
    for (int i = 1; i <= num; i++){
        scanf("%d",&data);
        sum += data ;
        avr = sum / len;
    }
    printf("長さ;%d　合計値;%lf　平均値;%lf\n",len,sum,avr);
    return 0;
}

int main(void){
    data3(10);
    return 0;
}
