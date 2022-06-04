#include <stdio.h>

int kaijo(int x){
    if (x == 0)
        return 1;
    
    return x * kaijo(x-1);
}

int permutation(int n,int k){
    int nPk = 0;
    
    if (n < k)
        printf("nはkよりも小さい数を定義してください。\n");
    nPk = kaijo(n)/kaijo(k);
    return nPk;
}

int convination(int n,int k){
    int nCk = 0;
    
    if (n < k)
        printf("nはkよりも小さい数を定義してください。\n");
    nCk = permutation(n,k)/kaijo(n - k);
    return nCk;
}

int main(void){
    
    printf("%d\n", kaijo(4));
    printf("%d\n",permutation(10,5));
    printf("%d\n",convination(10,5));
    
    return 0;
}
