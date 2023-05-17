#include <stdio.h>

int main() {
    
    int num[10];
    int n, repetido=0;

    for (int x = 0; x < 10; x++) {

        scanf("%d", &n);

        for (int i = 0; i < x; i++) {
            repetido=0;
            if (num[i] == n) {
                repetido = 1;
                break;
            }
        }
        
    
    
        if (repetido==1) {
                printf("Número repetido. Informe outro número.\n");
                x--; 
            } else {
                num[x] = n;
            }
}
    
    printf("Números lidos:\n");
    for (int x = 0; x < 10; x++) {

        printf("%d \n", num[x]);
    }
    
    return 0;
}
