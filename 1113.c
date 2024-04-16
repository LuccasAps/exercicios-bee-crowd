#include <stdio.h>

int main(){
    int M, N;
    while (1)
    {
        scanf("%d%d",&M ,&N);
        if (M > N)
        {
            printf("Decrescente\n"); 
        }
        if (N > M)
        {
            printf("Crescente\n");
        }
        if (M == N)
        {
            break;
        }
    }
    
}