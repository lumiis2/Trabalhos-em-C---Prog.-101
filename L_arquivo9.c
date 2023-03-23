 #include <stdio.h>

 // MATRIZ
// imrpime os numerosmaiores de 10 numa mariz e fala quantos numeros mairoes de 10 que tem

int main (){

        int i;
        int j;
        int matriz [4][4];
        int count = 0;

        for (i=0; i<4; i++){
            for (j=0; j<4; j++){
                scanf("%i", &matriz[i][j]);
            }
        }
        //if (matriz [i][j] > 10) {
                    for (i=0; i<4; i++){
                        for (j=0; j<4; j++){
                        if (matriz [i][j] > 10){
                            count++;
                            printf("%i ", matriz [i][j]);
                        }

            }
            printf ("\n");
        }
            printf ("%i", count);


    return 0;
}
