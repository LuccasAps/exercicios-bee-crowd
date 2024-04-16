#include <stdio.h>
int main()
{   
    int e;
    double a,b,c=0,d=0;
    while(1)
    {
        if(d==2)
            break;
        scanf("%lf", &a);
        if(a>=0 && a<=10)
        {
            d++;
            c+=a;
        }
        else{
            printf("nota invalida\n");
            continue;
        }
        printf("novo calculo (1-sim 2-nao)");
            scanf("%d",&e);
            if (e != 1)
            {
                break;
            }
    }
    b=c/2.00;
    printf("media = %.2lf\n", b);
    return 0;
}