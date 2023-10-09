/******************************************************************************
Crie uma estrutura para armazenar livros: título (maximo 30 letras), autor (maximo 15
letras) e ano. Faça um programa que leia um vetor desta esrutura com dados de 5 livros. Em
uma função separada, que verifica os dados no vetor, procure um livro por título,
perguntando ao usuario qual título deseja buscar. Mostre os dados de todos os livros
encontrados.
*******************************************************************************/

#include <stdio.h>
#include <string.h>

struct Livro{
    char titulo[30];
    char autor[15];
    int ano;
};

void BuscarLivro(struct Livro livros[5], char livro_solicitado[30]){
    int n;
    for(int i=0;i<5;i++){
        if(strcmp(livros[i].titulo, livro_solicitado) == 0){
            n = i;
        }
        }
    printf("\nTitulo: %s", livros[n].titulo);
    printf("\nAutor: %s", livros[n].autor);
    printf("\nAno: %d", livros[n].ano);
}

int main(){

    struct Livro livros[5];
    for(int i=0; i<5; i++){
        printf("Titulo do livro: ");
        scanf(" %s", livros[i].titulo);
        printf("Autor do livro: ");
        scanf(" %s", livros[i].autor);
        printf("Ano do livro: ");
        scanf("%d", &livros[i].ano);
    }
    
    char livro_solicitado[30];
    
    printf("Digite o titulo do filme que desejas pesquisar: ");
    scanf("%s", livro_solicitado);
    
    BuscarLivro(livros, livro_solicitado);
    
    return 0;
}
