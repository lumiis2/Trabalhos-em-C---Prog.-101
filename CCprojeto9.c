#include <stdio.h>

int main(){

    int i, j, mat[3][3];


    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &(mat[i][j]));
        }
    }


    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(i == j){
                mat[i][j] = 1;
            } else if ( i != j ){
                mat[i][j] = 0;
            }
        }
    }

     for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", (mat[i][j]));
        }
        printf("\n");
    }


    return 0;
}


