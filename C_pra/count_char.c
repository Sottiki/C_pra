#include <stdio.h>
int main(void){

    char str[100];
    int i = 0;
    int l = 0;

    printf("文字列の入力\n");
    scanf("%s",str);
    while(str[l] != 0){
        l++;
    }
    for ( i = 0; l-i >= 0; i++){
        printf("%c", str[l-i]);
    }
    printf("\n");
    return 0;
}
