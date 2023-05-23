#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float produtos_lojas[15][3];

    for (int l=0; l<15; l++){
        for (int c=0; c<3; c++){
            produtos_lojas[l][c]= rand()%10;
            printf("     %.2f", produtos_lojas[l][c]);
        }
        printf("\n");
    }
    
    printf("\n");

    for (int l=0; l<15; l++){
        if(produtos_lojas[l][0]<=produtos_lojas[l][1] && produtos_lojas[l][0]<=produtos_lojas[l][2]){
            printf("O menor preço do produto linha %d está na loja coluna 0", l);
        }  
        else if(produtos_lojas[l][1]<=produtos_lojas[l][0] && produtos_lojas[l][1]<=produtos_lojas[l][2]){
            printf("O menor preço do produto linha %d está na loja coluna 1", l);
        }   
        else{
            printf("O menor preço do produto linha %d está na loja coluna 2", l);
        }
        
        printf("\n");
    }
    
    return 0;
}
