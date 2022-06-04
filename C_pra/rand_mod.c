#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int i;
    int randomnum[1000000];
    double sum_si = 0;
    srand((unsigned int)time(NULL));
    
    for (i = 0; i<1000000; i++){
        randomnum[i] = 1 + random()%6;
        sum_si += randomnum[i];
        if (i%100000 == 0)
           printf("出た目は%d、目の合計値は%f\n", randomnum[i], sum_si);
    }
    printf("でた目の平均は%fです。",sum_si / 1000000);
    return 0;
}
