#include <stdio.h>

int main() {
int A;
double B,C;
scanf("%s",&A);
scanf("%lf%lf",&B,&C);
printf("TOTAL = R$ %.2lf\n",B+(C*0.15));
    return 0;
}
