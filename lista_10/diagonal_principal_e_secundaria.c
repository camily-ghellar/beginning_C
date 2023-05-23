#include <stdio.h>

int main(){
    
    int A[5][5];
    int soma_princ=0;
    int soma_sec=0;
    
    for (int l=0; l<5; l++){
        for (int c=0; c<5; c++){
            printf("Digite elem. posição %d, %d: ", l, c);
            scanf("%d", &A[l][c]);
            if (l==c){
                soma_princ= soma_princ + A[l][c];
            }
            if(l+c==4){
                soma_sec= soma_sec + A[l][c];
            }
        }
    }
    
     for (int l=0; l<5; l++){
        for (int c=0; c<5; c++){
            printf("%5d", A[l][c]);
        }
        printf("\n");
    }
   
    printf("Soma da diagonal principal: %d\n", soma_princ);
    printf("Soma da diagonal secundária: %d", soma_sec);

    
    return 0;
}
