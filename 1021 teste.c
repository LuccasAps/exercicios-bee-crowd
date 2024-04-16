#include <stdio.h>

int main (){

        double N;
        int notas;

        scanf("%lf",&N);

        notas = N/100;
        printf("NOTAS:\n");
        printf("%d nota(s) de R$ 100.00\n",notas);
        N = N - (notas*100);
        notas = N/50;
        printf("%d nota(s) de R$ 50.00\n",notas);
        N = N - (notas*50);
        notas = N/20;
        printf("%d nota(s) de R$ 20.00\n",notas);
        N = N - (notas*20);
        notas = N/10;
        printf("%d nota(s) de R$ 10.00\n",notas);
        N = N - (notas*10);
        notas = N/5;
        printf("%d nota(s) de R$ 5.00\n",notas);
        N = N - (notas*5);
        notas = N/2;
        printf("%d nota(s) de R$ 2.00\n",notas);
        N = N - (notas*2);
        printf("MOEDAS:\n");
        notas = N/1;
        printf("%d moeda(s) de R$ 1.00\n",notas);
        N = N-(notas*1);
        notas = N/0.50;
        printf("%d moeda(s) de R$ 0.50\n",notas);
        N = N-(notas*0.50);
        notas = N/0.25;
        printf("%d moeda(s) de R$ 0.25\n",notas);
        N = N-(notas*0.25);
        notas = N/0.10;
        printf("%d moeda(s) de R$ 0.10\n",notas);
        N = N-(notas*0.10);
        notas = N/0.05;
        printf("%d moeda(s) de R$ 0.05\n",notas);
        N = N-(notas*0.05);
        notas = N/0.01;
        printf("%d moeda(s) de R$ 0.01\n",notas);
}
