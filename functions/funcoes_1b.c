#include <stdio.h>

int Intervalo(int n1, int n2){
    int n = 0;
    for(n1; n1<=n2; n1++){
        n = n + n1;
    }
    return n;
}

int main()
{
    int n1;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    
    int n2;
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    
    int resultado = Intervalo(n1, n2);
    printf("%d", resultado);
}
