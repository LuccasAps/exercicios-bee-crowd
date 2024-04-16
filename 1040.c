#include <stdio.h>
int main (){
float N1,N2,N3,N4,M1,MF,E;
scanf("%f%f%f%f",&N1,&N2,&N3,&N4);
M1 = (N1*2+N2*3+N3*4+N4*1)/10;
   printf("Media: %.1f\n",M1);
   if(M1>7.0 || M1 == 7.0){
    printf("Aluno aprovado.\n");
    return 0;
   }
   if(M1<5.0){
    printf("Aluno reprovado.\n");
    return 0;
   }
   if(5.0<M1 && M1<6.9){
    printf("Aluno em exame.\n");
    scanf("%f",&E);
    printf("Nota do exame: %.1f\n",E);
    MF = (M1 + E)/2;
    if(MF>5.0 || MF == 5.0){
    printf("Aluno aprovado.\n");
    printf("Media final: %.1f\n", MF);
    return 0;
    }
    if(MF<5.0){
    printf("Aluno reprovado.\n");
    printf("Media final: %.1f\n", MF);
    return 0;
    }
   }
}
