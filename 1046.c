#include <stdio.h>

int main(){
    int A, B;
    scanf("%d%d",&A,&B);
    if(B>A){
    printf("O JOGO DUROU %d HORA(S)\n", B-A);
    return 0;
    }
    if(A>B){
    printf("O JOGO DUROU %d HORA(S)\n",(24-A)+B);
    return 0;
    }
    if(A==B){
    printf("O JOGO DUROU 24 HORA(S)\n");
    return 0;
    }

}
