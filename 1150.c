#include <stdio.h>
int main()
{
    int X, Z, c=1,s=0;
    scanf("%d", &X);
    while(Z<=X){
        scanf("%d", &Z);
    }
    s = X;
    do{
        X++;
        s += X;
        c++;
    }
    while (s <= Z);

    printf("%d\n",c);

    return 0;
}