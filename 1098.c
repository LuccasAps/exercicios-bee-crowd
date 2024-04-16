#include <stdio.h>

int main()
{
    float I,J;
    for(I=0;I<=9;I=I+0.2)
    {
        for(J=7;J>J-2;J--)
            printf ("I=%f J=%f\n",I,J);
    }
    return 0;
}