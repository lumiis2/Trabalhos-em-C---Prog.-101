 #include <stdio.h>

 // MATRIZ
// le uma matriz 2 por 2 e n lembro mais

int main (){

        int i;
        int j;
        int matriz [2][2];
        int x;
        int y;
        int v;

        for (i=0; i<2; i++){
            for (j=0; j<2; j++){
                scanf("%i", &matriz[i][j]);
            }
        }

        scanf("%i", &v);

         for (i=0; i<2; i++){
            for (j=0; j < 2; j++){
                scanf("%i", &matriz[i][j]);
                 if (v == matriz [i][j]) {
                    v = matriz [i][j];
                 }
            }
        }
        x = i;
        y = j;

        printf ("%i\n", v);
        printf ("%i %i", x, y);


    return 0;
}
