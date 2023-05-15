#include <stdio.h>
#include <limits.h>

int main(){
    
    int n;
    
    scanf("%d", &n);
    
    int vetor[n], maior=INT_MIN, menor=INT_MAX;
    
    for (int x=0; x<n; x++){
        scanf("%d", &vetor[x]);
        
        if (vetor[x]>maior){
            maior=vetor[x];
        }
        if(vetor[x]<menor){
            menor=vetor[x];
        }
	    
    }

    printf("Menor número do vetor: %d\n", menor);
    printf("Maior número do vetor: %d", maior);


    return 0;
}
