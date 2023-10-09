#include <stdio.h>

void DesenhaLinha(int qntd){
    for(int x=0; x<qntd; x++){
        printf("=");
    }
}

int main()
{
    int qntd;
    printf("Digite quantos sinais de igual serão mostrados: ");
    scanf("%d", &qntd);
    
    DesenhaLinha(qntd);
}
