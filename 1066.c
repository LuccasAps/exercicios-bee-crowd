#include <stdio.h>

int main()
{
    int par, n, impar, posi, neg ;

    par = 0;
    impar = 0;
    posi = 0;
    neg = 0;
    for (int i = 0; i < 5; ++i)
    {
        scanf("%d", &n);

        if (n % 2 == 0)
            ++par;

        if (n % 2 != 0)
            ++impar;

        if (n > 0)
            ++posi;

        if (n < 0)
            ++neg;

    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, impar, posi, neg);

    return 0;
}
