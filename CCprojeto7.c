#include <stdio.h>

int main(){

    int i, j, mat[2][2];
    int somap;
    int somai;
    char op;

    printf("Menu de opcoes: \n");
    printf("(a) Somar todos os elementos da matriz \n");
    printf("(b) Somar todos os elementos pares da matriz \n");
    printf("(c) Somar todos os elementos impares da matriz \n");
    printf("Digite a opcao desejada: ");

        scanf("%c", &op);

    printf("Digite a matriz: ");


    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            scanf("%d", &(mat[i][j]));
        }
    }


    if (op == 'a'){
        printf("Soma de todos os elementos: %d\n", mat[0][1] + mat[0][1] + mat [1][0] + mat[1][1]);
    }else if (op == 'b'){
        somap = 0;
        for(i = 0; i < 2; i++){
            for(j = 0; j < 2; j++){
                if(mat[i][j] % 2 == 0){
                    somap += mat [i][j];
                }
            }
        }
      printf("Soma de todos os elementos pares: %d\n", somap);
    }else if (op == 'c'){
        somai = 0;
        for(i = 0; i < 2; i++){
            for(j = 0; j < 2; j++){
                if(mat[i][j] % 2 != 0){
                    somai += mat [i][j];
                }
            }
        }
      printf("Soma de todos os elementos impares: %d\n", somai);
    }

    return 0;
}

