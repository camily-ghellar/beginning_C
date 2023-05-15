#include <stdio.h>

int main()
{
    int B[8] = {12, 6, 8, 10, 15, 20, 17, 9};
    int n, aux=0;
    scanf("%d", &n);

    for (int x=0; x<8; x++){
        if (n == B[x]){
            printf("Número lido: %d; Posição: %d.", n, x);
            aux=1;
        }
    }
    
    if (aux==0){
        printf("%d não encontrado", n);
    }
    
    return 0;
}
