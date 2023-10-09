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

    int qntd;
    int resultado;

    printf("Digite a quantidade de numeros a serem inseridos: ");
    scanf("%d", &qntd);
    int numeros[qntd];

    int n;


    if(qntd<=10){
        for(int i = 0; i < qntd; i++){
            printf("Digite o numero: ");
            scanf("%d", &n);
            numeros[i] = n;
        }
        for(int i = 0; i < qntd; i++){
            printf("%5d", numeros[i]);
        }
    }
    else{
        printf("Numero invalido.");
    }

    int maior = numeros[0];

    for(int i = 1; i < qntd; i++){

        maior = Maior(maior, numeros[i]);

    }

    printf("\nMaior numero informado: %d", maior);
    return 0;
}

/*Crie um programa que deve solicitar na tela o total de numeros inteiros que serão
informados (até o máximo de 10 números).
A seguir, solicitar na tela os números (até o máximo informado anteriormente).
O programa deve descobrir qual é o maior dos números informados e imprimir o resultado.
Detalhe: Para identificar qual é o maior número, SÓ PODE SER UTILIZADA A FUNÇÃO
Maior() que foi criada no exercício 1, acima*/
