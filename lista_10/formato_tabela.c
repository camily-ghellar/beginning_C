#include <stdio.h>

int main(){
    
    int A[4][5] = {2, 3, 1, 4, 5, 1, 3, -5, 0, 8, 2, 5, 6, 3, -5, -1, 0, 1, 2, 3};
    
    for (int l=0; l<4; l++){
        for (int c=0; c<5; c++){
            printf("%5d", A[l][c]);
        }
        printf("\n");
    }

    return 0;
}
