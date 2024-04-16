#include <stdio.h>


int main() {
    float A, B, C, t, c, a, q, r;
    const double pi=3.14159;
    scanf("%f%f%f",&A, &B, &C);
    t = (A*C/2);
    c = pi*C*C;
    a = (A+B)*C/2;
    q = B*B;
    r = A*B;
    printf("TRIANGULO: %.3lf\n",t);
    printf("CIRCULO: %.3lf\n",c);
    printf("TRAPEZIO: %.3lf\n",a);
    printf("QUADRADO: %.3lf\n",q);
    printf("RETANGULO: %.3lf\n",r);
}
