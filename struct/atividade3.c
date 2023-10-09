#include <stdio.h>
#include <stdlib.h>

struct Aluno{
    char Nome[30];
    int Matricula;
    char Curso[20];

};

void ImprimirAlunos(struct Aluno alunos[]){
    for(int i = 0; i<5; i++){
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].Nome);
        printf("Matricula: %d\n", alunos[i].Matricula);
        printf("Curso: %s\n", alunos[i].Curso);
    }
}

int main(){
    struct Aluno alunos[5];
    
    for(int i = 0; i<5; i++){
        printf("Nome do aluno: ");
        scanf("%s", alunos[i].Nome);
        printf("Matricula do aluno: ");
        scanf("%d", &alunos[i].Matricula);
        printf("Nome do curso: ");
        scanf("%s", alunos[i].Curso);
    }

    ImprimirAlunos(alunos);
    
    return 0;
}

/*
Construa uma estrutura aluno com nome, numero de matrícula e curso. Leia do usuario a
informação de 5 alunos, armazene em vetor dessa estrutura e, utilizando uma outra função,
imprima os dados na tela.
*/