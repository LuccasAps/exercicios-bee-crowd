#include <stdio.h>

int main()
{
    int par, n ;

    par = 0;
    for (int i = 0; i < 5; ++i)
    {
        scanf("%d", &n);

        if (n % 2 == 0)
            ++par;
    }

    printf("%d valores pares\n", par);

    return 0;
}
