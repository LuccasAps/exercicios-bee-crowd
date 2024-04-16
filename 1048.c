#include <stdio.h>

int main() {
    float A,B,C;
    scanf("%f",&A);
    if(0.00 <= A && A <= 400.00){
        B = A*1.15;
        C = (A*1.15)-A;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",B,C);
    return 0;
    }
    if(400.01 <= A && A <= 800.00){
        B = A*1.12;
        C = (A*1.12)-A;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",B,C);
    return 0;
    }
    if(800.01 <= A && A <= 1200.00){
        B = A*1.10;
        C = (A*1.10)-A;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",B,C);
    return 0;
    }
    if(1200.01 <= A && A <= 2000.00){
        B = A*1.07;
        C = (A*1.07)-A;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",B,C);
    return 0;
    }
    if(2000.01 <= A){
        B = A*1.04;
        C = (A*1.04)-A;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",B,C);
    return 0;
    }
    return 0;
}
