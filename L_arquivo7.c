#include <stdio.h>
//  primerio o programa le 12 valores
// depois ele pede dois valores x e y
// depois ele acha em qual posicao estaos tais valores sao esse e os soma


 int main ()
{

    int valores [12];
    int x;
    int y;
    int n;


        for (n = 0; n < 12; n++){
                scanf("%i", &valores[n]);
        }
                scanf("%i", &x);
                scanf("%i", &y);

        x = valores [x];
        y = valores [y];

        int soma = x + y;

        printf ("%i", soma);



    return 0;
}
