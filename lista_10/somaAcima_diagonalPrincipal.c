#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
   
    int matriz[10][10], soma=0;
    
    srand(time(NULL));
    for (int l=0; l<10; l++){
        for (int c=0; c<10; c++){
            matriz[l][c] = rand()%10+1;
            printf("%5d", matriz[l][c]);
            if(c>l){
                soma += matriz[l][c];
            }
        }
        printf("\n");
    }
    printf("\nSoma dos elementos acima da diagonal principal: %d", soma);
    
    return 0;
}
