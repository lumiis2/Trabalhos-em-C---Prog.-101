#include <stdio.h>

int main(){

    int i, j, mat[3][3];


    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &(mat[i][j]));
        }
    }


    float sum = 0;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(i == j){
               sum += mat[i][j];
            }
        }
    }

    printf("Soma da diagonal: %f\n", sum);

    printf("Media da diagonal: %f\n ", sum / 9);

    return 0;
}

