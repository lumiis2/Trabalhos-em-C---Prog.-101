#include<stdio.h>
int main(){
    int saldo = 500;

    printf ("Saldo em conta: %d\n", saldo);

    // exercicio

    printf ("Valor depositado:");

    int deposito;
    scanf ("%d", &deposito);
    printf ("Total: %d\n", deposito + saldo);

    // exercicio

    int a;
    int b;

    scanf("%d %d", &a, &b);
    printf("Soma: %d %d\n", a + b);

    printf("Diferenca: %d %d\n", a - b);

    printf("Produto: %d %d\n", a * b);

    printf("Quociente: %d %d\n", a / b);

    printf("Resto: %d %d\n", a % b);

    // ???





  return 0;
}
