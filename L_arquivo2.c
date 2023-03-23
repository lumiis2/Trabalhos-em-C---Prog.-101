#include <stdio.h>

int main() {

    //int a;
    //int b;
    //int count = 0

    //scanf("%i %i", &a, &b);
    //printf("X = %i", a + b);


    // execicio 2

    int num;
    int i;
    int count100 = 0;
    int count50 = 0;
    int count20 = 0;
    int count10 = 0;
    int count5 = 0;
    int count2 = 0;
    int count1 = 0;

        scanf("%i", &num);

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

        printf("100 = %i\n50 = %i\n20 = %i\n10 = %i\n5 = %i\n2 = %i\n1 = %i\n", count100, count50,
               count20, count10, count5, count2, count1);




    return 0;
}
