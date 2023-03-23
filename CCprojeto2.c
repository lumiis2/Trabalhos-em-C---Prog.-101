// Lista aula 1
#include<stdio.h>
#include<math.h>

int main (){

//1  ja feito

//2
    float valorC;
    printf("Insira o valor em Celcius:\n");
    scanf("%f", &valorC);

    //conta = (9*valorC)/ 5 + 32;



    printf ("O valor em Fahrenheit: %f\n", (9*valorC)/ 5 + 32);

//3 ja feito
//4
    float salario_fixo;
    float total_de_vendas;
    //float salario_total = (salario_fixo + total_de_vendas * 1.15);

    printf ("Adicione o valor do salario\n E o numero de vendas\n");
    scanf("%f %f", &salario_fixo, &total_de_vendas);

    printf ("Salario Total: %f\n", (salario_fixo + total_de_vendas * 0.15));

//5
    //automovel faz 12km/l
    float tempo;
    float vel_media;
    float kilometros = vel_media*tempo;
    float litros = kilometros / 12;

    printf ("Tempo:");
    scanf("%f", &tempo);
    printf ("Velocidade Media:");
    scanf("%f", &vel_media);

    printf ("Joaozinho vai precisar de: %f\n", (vel_media*tempo)/12 );


//6
    int dia1;
    int mes1;
    int dia2;
    int mes2;

        //data inicial
        //data final

    printf ("Inicial:\n");
    scanf("%f %f", &dia1, &mes1);
    printf ("Final:\n");
    scanf("%f %f", &dia2, &mes2);

    printf (" Faltam : %int dias para prova\n", dia2 - dia1, mes2 -mes1);

    // ???????????

//7
    // distancia entre dois pontos = d sqr xa - xb a2 yb - ya a2
    int xa;
    int xb;
    int ya;
    int yb;

    printf("Adicione as cooerdenadas de X:\n");
    scanf("%i %i", &xa, &xb);
    printf("Adicione as cooerdenadas de Y:\n");
    scanf("%i %i", &ya, &yb);

    printf("A distancia entre os pontos eh:", sqrt(pow((xa - xb), 2) + pow((yb - ya), 2)));
    // ?????????



    return 0;
}
