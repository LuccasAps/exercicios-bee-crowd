#include <stdio.h>

int main()
{
    int x,y,i,soma;
    soma = 0;
    scanf("%d%d", &x,&y);

    if(y % 2 == 1){

    for (i = y; i < x; i=i+2)
    {
    soma+=i;
    }

    printf("%d",soma);

}else {

    y = y+1;
    for (i = y; i < x; i=i+2)
    {
      soma=i;
    }
    printf("%d\n",soma);
        }

    return 0;

}
