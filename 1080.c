#include <stdio.h>
 
int main() {
    int i, j = 0, p;
    int v[100];

        for(i = 0; i < 100; i++){
            scanf("%d",&v[i]);
        }
        for(i = 0; i < 100; i++){
                if(v[i] > j){
                    j = v[i];
                    p = i + 1;
                }
        }
        printf("%d\n%d\n",j ,p);
    
    return 0;
}