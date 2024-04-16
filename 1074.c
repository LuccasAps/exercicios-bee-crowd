#include <stdio.h>
int main()
{
    int i, x, a;
    scanf("%d",&x);
        for(i = 0; i < x; i++){
            scanf("%d",&a);
            if(a == 0){
                printf("NULL\n");
                continue;
            }
            if(a % 2 == 0){
                printf("EVEN ");
            }
            if(a % 2 != 0){
                printf("ODD ");
            }
            if(a > 0){
                printf("POSITIVE");
            }
            if(a < 0){
                printf("NEGATIVE");
            }
        printf("\n");
    }
    return 0;
}
