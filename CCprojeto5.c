#include<stdio.h>
#include<math.h>

int main (){

    int var;
    int i;

    scanf("%i", &var);

    for (i=1; i <= var; i++ ){
        if(i % 2 == 1) {
            printf ("%i\n", i);
        }
    }

    //exercicio

    int v;
    int a = 0;

    scanf("%i", &v);

    while (a < 6){
        if (v % 2 != 0){
            printf("%i\n", v);
            a++;
        }
        v++;
    }







    return 0;
}

