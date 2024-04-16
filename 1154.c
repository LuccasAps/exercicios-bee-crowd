#include <stdio.h>
int main(){
    double a,s=0,b=0,m;
    while (1)
    {
        scanf("%lf",&a);
        if (a<0)
        {
            break;
        }else

        {
        s+=a;
        b++;
        }
    }
    m = s/b;
    printf("%.2lf\n",m);
    return 0;
}