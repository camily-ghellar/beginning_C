/******************************************************************************
Faça um programa para armazenar um livro de receitas e:
• Crie um vetor para estruturas de receitas, com 5 receitas, que deve conter: nome (maximo
25 letras), quantidade de ingredientes e ingredientes.
• Para cada receita, leia seu nome e a quantidade de ingredientes. Entao crie e leia o vetor
de ingredientes, sendo que cada ingrediente contem nome e quantidade.
• Procure receita por nome, mostrando seus ingredientes se encontrar. Se nao encontrar,
informe ao usuario. Repita o processo até que seja digitada uma string vazia.
• Utilize funções separadas.
*******************************************************************************/

#include <stdio.h>
#include <string.h>

struct Receita{
    char nome[25];
    char ingredientes[15];
    int quantidade_ingredientes;
};

void BuscarReceita(struct Receita receitas[5], char receita_solicitada[25]){
    int n=-1;
    for(int i=0;i<5;i++){
        if(strcmp(receitas[i].nome, receita_solicitada) == 0){
            n = i;
        }
    }
    
    if(n != -1){
        printf("\nNome: %s", receitas[n].nome);
        printf("\nIngredientes: %s", receitas[n].ingredientes);
        printf("\nQuantidade de ingredientes: %d", receitas[n].quantidade_ingredientes);}
    else{
        printf("Receita nao encontrada.");
    }
}

int main(){

    struct Receita receitas[5];
    for(int i=0; i<5; i++){
        printf("Nome da receita: ");
        scanf(" %s", receitas[i].nome);
        printf("Ingredientes: ");
        scanf(" %s", receitas[i].ingredientes);
        printf("Quantidade de ingredientes: ");
        scanf("%d", &receitas[i].quantidade_ingredientes);
    }
    
    char receita_solicitada[25];
    
    printf("Digite o nome da receita que desejas pesquisar: ");
    scanf("%s", receita_solicitada);
    
    if(strcmp(receita_solicitada, " ") == 0){
        printf("Programa encerrado.");
    }
    else{
        BuscarReceita(receitas, receita_solicitada);
    }
    
    return 0;
}
