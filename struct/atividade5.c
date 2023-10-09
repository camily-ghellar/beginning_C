#include <stdio.h>
#include <stdlib.h>

struct Aluno{
    char Nome[30];
    int Matricula;
    int CoDisciplina;
    float Nota1;
    float Nota2;

};

float Media(float Nota1, float Nota2){
    
    float media = (Nota1+(Nota2*2))/3;
    return media;
}

void ImprimirAlunos(struct Aluno alunos[]){
    for(int i = 0; i<5; i++){
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].Nome);
        printf("Matricula: %d\n", alunos[i].Matricula);
        printf("Codigo da disciplina: %d", alunos[i].CoDisciplina);
        printf("Primeira nota: %.2f", alunos[i].Nota1);
        printf("Segunda nota: %.2f", alunos[i].Nota2);
        float media = Media(alunos[i].Nota1, alunos[i].Nota2);
        printf("Media final %.2f", media);
    }
}

int main(){
    struct Aluno alunos[10];
    
    for(int i = 0; i<5; i++){
        printf("Nome do aluno: ");
        scanf("%s", alunos[i].Nome);
        printf("Matricula do aluno: ");
        scanf("%d", &alunos[i].Matricula);
        printf("Codigo da disciplina: ");
        scanf("%d", &alunos[i].CoDisciplina);
        printf("Primeira nota: ");
        scanf("%f", &alunos[i].Nota1);
        printf("Segunda nota: ");
        scanf("%f", &alunos[i].Nota2);
        
    }

    ImprimirAlunos(alunos);
    
    return 0;
}

/*
Faça um programa que realize a leitura dos seguintes dados relativos a um conjunto de
alunos:
• Matricula, Nome, Codigo da Disciplina, Nota1 e Nota2.
Considere uma turma de até 10 alunos. Após ler todos os dados digitados, e depois de
armazená-los em um vetor de estrutura, exibir na tela a listagem final dos alunos com as
suas respectivas medias finais (use uma media ponderada: Nota1 com peso=1.0 e Nota2
com peso=2.0)
*/