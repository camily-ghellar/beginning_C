#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int A[4][5], soma_tudo=0;
    
    
    for (int l=0; l<4; l++){
        for (int c=0; c<5; c++){
            A[l][c]= rand()%10;
            printf("%5d", A[l][c]);
        }
        printf("\n");
    }
    
    //linha
    for (int l=0; l<4; l++){
        int soma_linha=0;
        for (int c=0; c<5; c++){
            soma_linha= soma_linha+A[l][c];
            soma_tudo= soma_tudo+A[l][c];
        }
        printf("Soma linhas:");
        printf("%5d\n", soma_linha);
    }
    printf("\n");
    
    //coluna
    for (int c=0; c<5; c++){
        int soma_coluna=0;
        for (int l=0; l<4; l++){
            soma_coluna= soma_coluna+A[l][c];
        }
        printf("Soma colunas:");
        printf("%5d\n", soma_coluna);
    }
    printf("\n");

           
    printf("Soma tudo:");
    printf("%5d\n", soma_tudo);

    
    return 0;
}
