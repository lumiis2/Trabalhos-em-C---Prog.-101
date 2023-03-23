#include <stdio.h>

int main(){

    int i, j, mat[3][3];
    int X, encount;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &(mat[i][j]));
        }
    }

    scanf("%d", &X);

    encount = 0;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(mat[i][j] == X){
                encount = 1;
                break;
            }
        }
        if (encount){
            break;
        }
    }

    if (encount){
        printf("Localizacao: (%d, %d)\n", i, j);
    } else {
            printf("nao encontrado\n");
    }
    return 0;
}
