#include<stdio.h>

int main(){
    
    int n, i;
    int x, y, aux;
    int soma;
    scanf("%d",&n);
    while(i < n){
                if(n == 0) break;
                scanf("%d%d",&x,&y);

                if(x > y){
                     aux = x;
                     x = y;
                     y = aux;
                }
                soma = 0;
                for(int i = x+1; i < y; i++){
                       if(i%2 != 0) soma += i;
                }
                printf("%d\n",soma);
                i++;
    }
    return 0;
}