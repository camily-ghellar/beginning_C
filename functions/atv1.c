/******************************************************************************
Crie uma função em C, chamada Maior(), que recebe 2 números e retorna qual deles é o maior.

Crie um programa que deve solicitar na tela 4 números. 

O programa deve descobrir qual é o maior dos 4 números informados e imprimir o resultado.

Detalhe: Para identificar qual é o maior número, SÓ PODE SER UTILIZADA A FUNÇÃO Maior().

*******************************************************************************/

int Maior(int n1, int n2){
    int maior = n1;
    if(n1<n2){
        maior = n2;
    }
    return maior;
}

#include <stdio.h>

int main(){
    
    int n1, n2, n3, n4, maior1, maior2, maior;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    
    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);
    
    printf("Digite o quarto numero: ");
    scanf("%d", &n4);
    
    maior1 = Maior(n1, n2);
    maior2 = Maior(n3, n4);
    
    maior = Maior(maior1, maior2);
    
    printf("Maior numero: %d", maior);
    
    return 0;
}
