#include <stdio.h>
#include <stdlib.h>


struct Pessoa{
    char nome[20];
    char endereco[30];
    int idade;
};

void ImprimePessoa(struct Pessoa pessoa){
    printf("\n Nome: %s \n Idade: %d \n Endereco: %s", pessoa.nome, pessoa.idade, pessoa.endereco);
}

int main(){

    struct Pessoa pessoa;

    printf("\nDigite o nome da pessoa: ");
    scanf("%s", &pessoa.nome);

    printf("\nDigite a idade da pessoa: ");
    scanf("%d", &pessoa.idade);

    printf("\nDigite o endereco da pessoa: ");
    scanf("%s", &pessoa.endereco);

    ImprimePessoa(pessoa);

    return 0;
}


//Implemente um programa que leia o nome, a idade e o endere�o de uma pessoa e
//armazene os dados em uma estrutura. Envie esta estrutura para uma fun��o de dever�
//realizar a impress�o dos dados da estrutura na tela
