#include <stdio.h>

int main(){
    
    int codigos[100];
    int consulta, aux=0;

    for (int x=0; x<100; x++){
        scanf("%d", &codigos[x]);
    }
    
    printf("Digite o número para consulta: ");
    scanf("%d", &consulta);
    
    for (int x=0; x<100; x++){
        if (consulta == codigos[x]){
            printf("Código cadastrado. Posição: %d.", x);
            aux=1;
            }
    }
    
    if (aux==0){
        printf("Código não cadastrado.");
    }
    
    
    return 0;
}
