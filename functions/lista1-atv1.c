#include <stdio.h>
#include <stdlib.h>


int Maior(int n1, int n2){
    int maior = n1;
    if(n2>n1){
        maior = n2;
    }
    return maior;
}

int main(){
    int n1, n2;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &n1);

    printf("Digite o segundo numero: \n");
    scanf("%d", &n2);

    int resultado = Maior(n1, n2);

    printf("Maior numero: %d", resultado);
    return 0;
}


//Crie uma fun��o em C, chamada Maior(), que recebe 2 n�meros e retorna qual deles � o maior.
