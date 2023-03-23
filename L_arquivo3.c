#include <stdio.h>
// programa que decompoe em notas um dinheiro visando usar o menor numero de notas
// ele ta com uma falha nas moedas e nos centavos
int main() {

    //int a;
    //int b;
    //int count = 0

    //scanf("%i %i", &a, &b);
    //printf("X = %i", a + b);


    // execicio 2

    float num;
    float i;
    float count100 = 0;
    float count50 = 0;
    float count20 = 0;
    float count10 = 0;
    float count5 = 0;
    float count2 = 0;
    float count1 = 0;
    float count050 = 0;
    float count025 = 0;
    float count010 = 0;
    float count005 = 0;
    float count001 = 0;



        scanf("%f", &num);

                for (i =0; num >= 100; num = num - 100 ){
                    count100++;
                }
                for (i =0; num >= 50; num = num - 50 ){
                    count50++;
                }
                for (i =0; num >= 20; num = num - 20 ){
                    count20++;
                }
                for (i =0; num >= 10; num = num - 10 ){
                    count10++;
                }
                for (i =0; num >= 5; num = num - 5 ){
                    count5++;
                }
                for (i =0; num >= 2; num = num - 2 ){
                    count2++;
                }
                for (i =0; num >= 1; num = num -1 ){
                    count1++;
                }
                for (i =0; num >= 0.50; num = num -0.50 ){
                    count050++;
                }
                for (i =0; num >= 0.25; num = num -0.25 ){
                    count025++;
                }
                for (i =0; num >= 0.10; num = num -0.10 ){
                    count010++;
                }
                for (i =0; num >= 0.05; num = num -0.05 ){
                    count005++;
                }
                for (i =0; num >= 0.01; num = num -0.01 ){
                    count001++;
                }

        printf("100 = %f\n 50 = %f\n 20 = %f\n 10 = %f\n 5 = %f\n 2 = %f\n 1 = %f\n 0.50 = %f\n 0.25 = %f\n 0.10 = %f\n 0.05 = %f\n 0.01 = %f\n", count100, count50,
               count20, count10, count5, count2, count1, count050, count025, count010, count005, count001);

    return 0;

}
