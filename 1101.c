#include <stdio.h>

int main(){
    int M, N, i, aux, soma = 0;
    while (1)
    {
        scanf("%d%d",&M ,&N);
            if(M <= 0 || N <= 0){
                break;
                }
            if (N > M)
            {
            aux = M;
            M = N;
            N = aux;
            }
        for (i = N; i <= M; i++)
        {
            soma = soma + i;
        printf("%d ",i);
        }
        printf("%d\n",soma);
        soma = 0;
        i = N;
    }
    
}