#include<stdio.h>

int main (){

    int idades [20]; //declarei o primeiro vetor
    int n;

    //posicao dentro do vetor ex: 18, 18, 19, 21, 20;
    //                            p0  p1  p2  p3  p4
    // n++ = n = n + 1

    //notacao para preencher o vetor
    for (n = 0; n < 20; n++){    // essa entrada fala q o loop vai rodar o scanf de um numero 20 vezes
        scanf ("%i", &idades[n]);  // o n representa a posicao de cada idade, eh ele q aumenta ate 20
    }

    for (n = 0; n < 20; n++){
        printf("%i", idades [n]);
        if (n < 20){
            printf (" ");
        }
        else {
            printf ("\n");
        }
    }


    return 0;
}
