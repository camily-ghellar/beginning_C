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
    int n;
    int numeros[10];
    int vetor_ordenado[10];
    for(int i = 0; i < 10; i++){
        printf("Digite o numero: ");
        scanf("%d", &n);
        numeros[i] = n;
    }

    for(int i = 0; i < 10; i++){
        int cont = 0;
        for(int i = 0; i < 10; i++){
            cont++;
            int maior = Maior(numeros[i], numeros[i+1]);
            vetor_ordenado[i] = maior;
        }
        numeros[cont] = 0;
    }

    char decisao;
    printf("Voce deseja o vetor em ordem crescente ou descrescente? Digite a primeira letra (c ou d)\n");
    scanf(" %c", &decisao);


    if(decisao == 'd'){
        for(int i = 0; i < 10; i++){
            printf(" %d", vetor_ordenado[i]);
        }
    }

    else{
        for(int i = 10; i > 0; i--){
            printf(" %d", vetor_ordenado[i]);
        }
    }

    return 0;
}

/*Criar um programa que solicita na tela 10 n�meros inteiros e armazena-os em um vetor.
A seguir esse vetor dever� ser ordenado (perguntar na tela se a ordem dever� ser Crescente
ou Decrescente).
Para realizar a ordena��o do vetor de inteiros, conforme a op��o informada pelo usu�rio,
utilizar somente a fun��o Maior() que foi criada no exerc�cio 1, acima*/
