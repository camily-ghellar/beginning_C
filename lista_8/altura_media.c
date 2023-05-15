#include <stdio.h>

int main(){
    
    int n_pessoas=30;
    
    float alturas[n_pessoas], total=0, media;
    int cont=0;
    
    for (int x = 0; x < n_pessoas; x++) {
        scanf("%f", &alturas[x]);
        total += alturas[x];
    }
    
    media= total/n_pessoas;
    
    for (int x = 0; x < n_pessoas; x++) {
        if(alturas[x]>media){
            cont++;
        }
    }
    
    printf("Média de alturas: %.2f\n", media);
    printf("Quantidade de pessoas que estão acima da média: %d", cont);
    
    return 0;
}
