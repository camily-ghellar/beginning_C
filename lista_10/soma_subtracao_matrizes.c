#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int A[3][5];
    int B[3][5];

    for (int l=0; l<3; l++){
        for (int c=0; c<5; c++){
            //scanf("%d", &A[l][c]);
            //scanf("%d", &B[l][c]);
            A[l][c]= rand()%10;
            B[l][c]= rand()%10;
            printf("%5d", A[l][c]);
        }
        printf("\n");
    }
    
    printf("\n");

    for (int l=0; l<3; l++){
        for (int c=0; c<5; c++){
            printf("%5d", B[l][c]);
        }
        printf("\n");
    }
    
    printf("\n");

    for (int l=0; l<3; l++){
        for (int c=0; c<5; c++){
            printf("%5d", A[l][c] + B[l][c]);
        }
        printf("\n");
    }
    
    printf("\n");
    
    for (int l=0; l<3; l++){
        for (int c=0; c<5; c++){
            printf("%5d", A[l][c] - B[l][c]);
        }
        printf("\n");
    }
    
    return 0;
}
