#include <stdio.h>

int main() {
    float A,B,C,temp,S,SQ,X;
    scanf("%f%f%f", &A,&B,&C);
    if(B > A){
       temp = B;
       B = A;
       A = temp ;
    }
    if(C > A ){
       temp = C;
       C = A;
       A = temp;
    }
    if(B > C ){
        temp = B;
        B = C;
        C = temp;
    }
    S = B+C;
    SQ = (B*B)+(C*C);
    X = A*A;
    if(A >= S){
        printf("NAO FORMA TRIANGULO\n");
        return 0;
    }
    if(X == SQ){
        printf("TRIANGULO RETANGULO\n");
    }
    if(X > SQ){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if(X < SQ){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(A == B && A == C && B == C){
        printf("TRIANGULO EQUILATERO\n");
        return 0;
    }
    if(A == B || A == C || C == B){
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}
