#include <stdio.h>

int main(){
    
    int numeros[20], aux=0;

    for (int x=0; x<10; x++){
        scanf("%d", &numeros[x]);
    }
    
    
    for (int x=19; x>=10; x--){
        numeros[x]=numeros[aux];
        aux++;
    }
    
    for(int x=0; x<20; x++){
        printf("%d   ", numeros[x]);
    }

    return 0;
}
