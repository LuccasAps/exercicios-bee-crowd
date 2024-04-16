#include <stdio.h>
int main()
{
    int i, x, a;
    int in = 0;
    int out = 0;
    scanf("%d",&x);
        for(i = 0; i < x; i++){
            scanf("%d",&a);
            if(a >= 10 && a <= 20){
                in++;
            }else{
                out++;
            }
    }
    printf("%d in\n%d out\n",in, out);
    return 0;
}
