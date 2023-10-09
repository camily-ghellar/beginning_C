#include <stdio.h>

int Intervalo(int n1, int n2){
    int n = 0;
    for(n1; n1<=n2; n1++){
        n = n + n1;
    }
    return n;
}

void DesenhaLinha(int qntd){
    for(int x=0; x<qntd; x++){
        printf("=");
    }
}

int main()
{
    int decisao;
    
    do{
    int qntd;
    printf("Digite quantos sinais de igual serão mostrados: ");
    scanf("%d", &qntd);
    
    DesenhaLinha(qntd);
    
    int n1;
    printf("\nDigite o primeiro numero: ");
    scanf("%d", &n1);
    
    int n2;
    printf("\nDigite o segundo numero: ");
    scanf("%d", &n2);
    
    int resultado = Intervalo(n1, n2);
    printf("%d", resultado);
    
    printf("\nDeseja começar de novo? Digite 0 caso não e qualquer outro numero caso sim.");
    
    scanf("%d", &decisao);}
    
    while(decisao != 0);
    
    printf("Função encerrada.");
}
