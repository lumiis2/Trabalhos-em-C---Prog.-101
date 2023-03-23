// Lista aula 3
#include<stdio.h>
#include<math.h>

int main (){

    /* int num;

    for (num=2; num <= 100; num = num+2){
            printf("%d\n", num);
    }

    return 0; */

    //
/*
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int count = 0;

    scanf("%i %i %i %i %i %i", &a, &b, &c, &d, &e, &f);

    if (a > 0){
        count++;
    }
    if (b > 0){
        count++;
    }
    if (c > 0){
        count++;
    }
    if (d > 0){
        count++;
    }
    if (e > 0){
        count++;
    }
    if (f > 0){
        count++;
    }

    printf("%i valores positivos", count);  */

    // modo 2
/*
    float x;
    int i;
    int count1 = 0;

    for (i = 1; i <= 6; i++){   // esse for eh uma forma de
        scanf("%f", &x);        // pedir 6 numeros pro usuario
        if (x > 0){
            count1 = count1 + 1;
        }
    }
    printf("%d valores positivos\n", count1); */

    // exercicio

    int h, hh, hr, m, mm, d, dm, s, ss;

    printf("Dia:\n");
    scanf("%d",&d);
    printf("Horas, minutos e segundos:\n");
    scanf("%d : %d : %d",&h,&m,&s);
    printf("Dia final:\n");
    scanf("%d",&dm);
    printf("Horas, minutos e segundos:\n");
    scanf("%d : %d : %d",&hh,&mm,&ss);

    s = ss - s;
    m = mm - m;
    h = hh - h;
    d = dm - d;

    if(s<0){
        s+=60;
        m--;
    }

    if(m<0){
        m+=60;
        h--;
    }

    if(h<0){
        h+=24;
        d--;
    }

    printf("%d dia(s)\n", d);
    printf("%d hora(s)\n", h);
    printf("%d minuto(s)\n", m);
    printf("%d segundo(s)\n", s);

// o de cima n deu certo vou dar um tempinho


    return 0;
}
