
#include <stdio.h>

int main() {
    
    int num[20], troca, copia;

    for (int x = 0; x < 20; x++) {

        scanf("%d", &num[x]);
    }
    
    do{ 
        troca = 0;
        for(int x = 0; x < 19; x++){ 
            if(num[x] > num[x+1]){ 
                copia = num[x];
                num[x] = num[x+1];
                num[x+1] = copia;
                troca = 1;
            }
        }
        
    }while(troca);
    
    
    printf("Ordem crescente:\n");
    for (int x = 0; x < 20; x++) {

        printf("%d \n", num[x]);
    }
    
    return 0;
}
