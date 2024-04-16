#include <stdio.h>

int main() {
    float A,B,C,D,E,F;
    scanf("%f",&A);
    if(0.00 <= A && A <= 2000.00){
    printf("Isento\n");
    return 0;
    }
    if(2000.01 <= A && A <= 3000.00){
        B = A-2000;
    printf("R$ %.2f\n",B*0.08);
    return 0;
    }
    if(3000.01 <= A && A <= 4500.00){
        B = 1000*0.08 ;
        C = A-3000;
        D = C*0.18;
        E = B + D;
    printf("R$ %.2f\n", E);
    return 0;
    }
    if(4500 <= A){
        B = 1000*0.08 ;
        C = 1500*0.18;
        D = A-4500;
        E = D*0.28;
        F = B+C+E;
    printf("R$ %.2f\n", F);
    return 0;
    }
    return 0;
}
