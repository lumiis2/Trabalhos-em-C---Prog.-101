#include <stdio.h>

 // MATRIZ
// le uma matriz dps le o contador mas n lembro direito

int main (){

        int i;
        int j;
        int a = 0;
        int matriz [3][2];
        int x;
        int y;

        for (i=0; i < 3; i++){
            for (j=0; j < 2; j++){
                scanf("%i", &matriz[i][j]);
                 if (matriz [i][j] > a) {
                    a = matriz [i][j];
                 }
            }
        }
        x = i;
        y = j;

        printf ("%i\n", a);
        printf ("%i %i", x, y);


    return 0;
}
