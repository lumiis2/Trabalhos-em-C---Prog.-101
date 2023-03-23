#include <stdio.h>
// esse programa inverte a ordem em posicao de 8 numeros!
 int main ()
{

    int valores [8];
    int n;

        for (n = 0; n < 8; n++){
                scanf("%i", &valores[n]);
        }


        for (n = 7; n > -1; n--){
                printf("%i ", valores [n]);

        }

    return 0;
}

