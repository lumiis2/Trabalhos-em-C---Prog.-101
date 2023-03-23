#include<stdio.h>
#include<math.h>
// faz uma piramide com o numero colocado, com o numero de linhas correspondente a esse
int main (){

    unsigned int num;
    unsigned int linha;
    unsigned int numplinha;
    unsigned int crescimento = 0;

    scanf ("%i", &num);

        for (int linha = 1; linha <= num; linha++) {
            for (int numplinha = 1; numplinha <= linha; numplinha++){

                    crescimento++;
                    printf ("%d ", crescimento);

            }
            printf ("\n");
        }











    return 0;

}
