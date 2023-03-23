#include <stdio.h>

// primeiro ele soma as posicoes 0, 1 e 5 da variavel a - 1+0+7= 8
// segundo printa todos os numeros

 int main ()
{

    int a [6] = {1, 0, 5, -2, 100, 7};
    int soma = a[0] + a[1] + a[5];
    int n;

    printf("%i\n", soma);


     for (n = 0; n < 7; n++){
        printf("%i\n", a[n]);

        }



    return 0;
}

