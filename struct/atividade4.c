#include <stdio.h>
#include <stdlib.h>

struct Aluno{
    char Nome[30];
    int Matricula;
    float Nota1;
    float Nota2;
    float Nota3;

};

void ImprimirAlunos(struct Aluno alunos[]){
    for(int i = 0; i<5; i++){
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].Nome);
        printf("Matricula: %d\n", alunos[i].Matricula);
        float media = (alunos[i].Nota1+alunos[i].Nota2+alunos[i].Nota3)/3;
        if(media>=6){
            printf("Aprovado");
        }
        else{
            printf("Reprovado");
        }
    }
}

void MaiorNota(struct Aluno alunos[]){
    int aluno=0;
    float maiorNota = alunos[0].Nota1;
    
    for(int i=1; i<5; i++){
        if(alunos[i].Nota1>maiorNota){
            maiorNota = alunos[i].Nota1;
            aluno=i;
        }
    }
    printf("Aluno com maior nota da primeira prova é o aluno %d, com a nota %f.", aluno, maiorNota);
    
    
}


void MaiorMedia(struct Aluno alunos[]){
    
    float maiorMedia=(alunos[0].Nota1+alunos[0].Nota2+alunos[0].Nota3)/3;
    int aluno=0;
    
    for(int i=1; i<5; i++){
        float media=(alunos[i].Nota1+alunos[i].Nota2+alunos[i].Nota3)/3;
        if(media>maiorMedia){
            maiorMedia=media;
            aluno=i;
        }
    }
    printf("Aluno com maior média é o aluno %d, com a nota %f.", aluno, maiorMedia);
    
    
    
    
}

void MenorMedia(struct Aluno alunos[]){
    float menorMedia=(alunos[0].Nota1+alunos[0].Nota2+alunos[0].Nota3)/3;;
    int aluno=0;
    
    for(int i=1; i<5; i++){
        float media=(alunos[i].Nota1+alunos[i].Nota2+alunos[i].Nota3)/3;
        if(media<menorMedia){
            menorMedia=media;
            aluno=i;
        }
    }
    printf("Aluno com menor média é o aluno %d, com a nota %f.", aluno, menorMedia);
    
    
}


int main(){
    struct Aluno alunos[5];
    
    for(int i = 0; i<5; i++){
        printf("Nome do aluno: ");
        scanf("%s", alunos[i].Nome);
        printf("Matricula do aluno: ");
        scanf("%d", &alunos[i].Matricula);
        printf("Primeira nota: ");
        scanf("%f", &alunos[i].Nota1);
        printf("Segunda nota: ");
        scanf("%f", &alunos[i].Nota2);
        printf("Terceira nota: ");
        scanf("%f", &alunos[i].Nota3);
    }

    ImprimirAlunos(alunos);
    MenorMedia(alunos);
    MaiorMedia(alunos);
    MaiorNota(alunos);
    
    return 0;
}

/*
Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da
terceira prova.
(a) Permita ao usuario entrar com os dados de 5 alunos.
(b) Encontre o aluno com maior nota da primeira prova.
(c) Encontre o aluno com maior media geral.
(d) Encontre o aluno com menor media geral
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
aprovação
*/