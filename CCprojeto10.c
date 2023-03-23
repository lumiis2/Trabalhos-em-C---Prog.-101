
#include <stdio.h>

int main(){

    int i, j;
    float mat[5][3];
    int provas[3];


    for(i = 0; i < 5; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &(mat[i][j]));
        }
    }
    for (i=0; i < 3; i++){
        provas[i] = 0
    }


    float sum = 0;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 3; j++){
            if(i == j){
               sum += mat[i][j];
            }
        }
    }

    printf("Soma da diagonal: %.2f\n", sum);

    return 0;
}

