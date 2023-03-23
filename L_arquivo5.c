 #include <stdio.h>
// o programa le 10 valores
// depos ele printa os que estao nas posicoes pares

 int main ()
{

    int valores [10];
    int n;

        for (n = 0; n < 10; n++){
                scanf("%i", &valores[n]);
        }
        for (n = 0; n < 10; n++){
                if (n % 2 != 0) {
                    printf("%i ", valores [n]);
                }
        }

    return 0;
}
