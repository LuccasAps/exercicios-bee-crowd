#include <stdio.h>

int main(){
int x,a=0,g=0,d=0;
    while (1)
    {
        scanf("%d",&x);
        if (x == 1)
        {
            a++;
            continue;
        }
        if (x == 2)
        {
            g++;
            continue;
        }
        if (x == 3)
        {
            d++;
            continue;
        }
        if (x == 4)
        {
            break;
        }
        
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",a);
    printf("Gasolina: %d\n",g);
    printf("Diesel: %d\n",d);
}