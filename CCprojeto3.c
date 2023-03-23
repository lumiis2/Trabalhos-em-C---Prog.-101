// Lista aula 2
#include<stdio.h>
#include<math.h>

int main (){

//  1 - feito

// 2 - fazer

// 3 - feito

// 4 - feito

// 5 - peso ideal

/*

    char sex;
    double height;
    float imc;

    // printf ("Digite altura:\n");
    // scanf ("%lf", &height);
    // printf ("Digite sexo m ou f:\n");
    // scanf ("%c", &sex);
    printf ("Digite o sexo - m ou f - e a altura:\n");

    scanf("%c %lf", &sex, &height);

    if(sex == 'm'){
        printf ("Seu IMC eh: %.2lf", (72.7 * height)- 58);
    }

    else if(sex == 'f'){
        printf ("Seu IMC eh: %.2lf\n", (62.1 * height)- 44.7);
    }


// 6 -
    int dia1, mes1, dia2, mes2;
    int resposta;

    printf("Escreva o dia e o mes incial e final respectivamente:\n");

    scanf("%d %d %d %d", &dia1, &mes1, &dia2, &mes2);

    // se a data final estiver no passado
    if ((mes2 < mes1) || (mes2 == mes1 && dia2 < dia1)) {
        // um ano - a diferenca entre o meses
        // os meses viram dias * por 30
        resposta = 360 - ((mes1*30 + dia1) - (mes2*30 + dia2));
    }
    else
        resposta = ((mes2*30 + dia2) - (mes1*30 + dia1));

    printf("%d\n", resposta);


// 7 -
    // 1 he verdadeiro, 0 eh falso

    //1

    //2
    int aux = -5;
    while(!aux){
        printf("eu nao paro de imprimir\n");
    }

    */

    // 8 - feito
    // 9 - feito

    // 10 - feito
    // 11 -
    // fatorial

    unsigned long long int valor1;
    int ax;

    scanf("%llu", &valor1);
    for(ax = valor1 - 1; ax >= 1; ax -- ){
// o ax vai de valor1 - 1 ate 1
        valor1 = valor1 * ax;
    }

    printf ("%llu\n", valor1);

    // 12 -
    int j1;
    int j2;
    int j3;

    scanf("%i %i %i", &j1, &j2, &j3);

    while (j1 == j2 && j2 == j3 && j1 == j3) {
        printf("Tente novamente\n");
        scanf("%i %i %i", &j1, &j2, &j3);
    }
    while (j1 != j2 && j1 != j3 && j2 != j3) {
        printf("Nao eh valido\n");
        scanf("%i %i %i", &j1, &j2, &j3);
    }
    if (j1 == j2 && j2 != j3) {
        printf("j3 perdeu\n");
    }
    else if (j1 != j2 && j2 == j3) {
        printf("j1 perdeu\n");
    }
    else if (j1 == j3 && j2 != j3) {
        printf("j2 perdeu\n");
     }

// 13 -  irmas competitivas

    int num_rod;
    int num1;
    int num2;
    // pontuacao

    int count1 = 0;
    int count2 = 0;


    printf("Numero de rodadas:\n");
    scanf("%i", &num_rod);

    while (num_rod -- ) {

        printf("Numero player1:\n");
        scanf("%i", &num1);
        printf("Numero de player2:\n");
        scanf("%i", &num2);

        if ( num1 > num2 ) {
        count1++;
        }
        else if ( num2 > num1 ) {
        count2++;
        }
    }

    printf("Pontos Play1: %i\nPontos Play2: %i\n", count1, count2);

    return 0;
}
