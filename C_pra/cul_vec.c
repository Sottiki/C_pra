#include <stdio.h>
#define VECT 3
int main(void){

    int vec1[VECT] = {1,4,-1};
    int vec2[VECT] = {2,6,4};
    int vec3[VECT];

    printf("vec3p = { ");
    for (int i = 0; i < VECT; i++){
        vec3[i] = vec1[i] + vec2[i];
        printf("%d,", vec3[i]);
    }
    printf("}\n");
    printf("vec3n = { ");
    for (int i = 0; i < VECT; i++){
        vec3[i] = vec1[i] - vec2[i];
        printf("%d,", vec3[i]);
    }
    printf("}\n");
    return 0;
}
