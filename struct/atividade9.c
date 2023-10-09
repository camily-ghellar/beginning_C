#include <stdio.h>
#include <stdlib.h>

struct Aluno{
    char nome[20];
    int matricula;
    float mediaFinal;

};

void ImprimeAlunos(struct Aluno alunos[3]){
    for(int i=0; i<3; i++){
        printf("\n Nome: %s \n Matricula: %d \n Media final: %f", alunos[i].nome, alunos[i].matricula, alunos[i].mediaFinal);
    }
}

int main(){

    struct Aluno alunos[3];
    int cont_aprovados=0;
    int cont_reprovados=0;

    for(int i=0; i<3; i++){
        printf("Digite o nome do aluno: ");
        scanf("%s", alunos[i].nome);

        printf("Digite a matricula do aluno: ");
        scanf("%d", &alunos[i].matricula);

        printf("Digite a media final do aluno: ");
        scanf("%f", &alunos[i].mediaFinal);

        if(alunos[i].mediaFinal >=5){
            cont_aprovados++;

        }
        else{
            cont_reprovados++;
        }
    }

    ImprimeAlunos(alunos);

    printf("\n-------------------------------------------------------------------------");
    struct Aluno alunos_aprovados[cont_aprovados];
    struct Aluno alunos_reprovados[cont_reprovados];

    cont_aprovados=0;
    cont_reprovados=0;

    for(int i=0; i<3; i++){
       if(alunos[i].mediaFinal >=5){
            alunos_aprovados[cont_aprovados]= alunos[i];
            cont_aprovados++;
        }
        else{
            alunos_reprovados[cont_reprovados]= alunos[i];
            cont_reprovados++;
        }
    }

    printf("\nAlunos com nota acima da media 5 (Aprovado):");
    for(int i=0; i<cont_aprovados; i++){
        printf("\n Nome: %s\n Media: %.2f", alunos_aprovados[i].nome, alunos_aprovados[i].mediaFinal);
        }

    printf("\nAlunos com nota abaixo da media 5 (Reprovado):");
    for(int i=0; i<cont_reprovados; i++){
        printf("\n Nome: %s\n Media: %.2f", alunos_reprovados[i].nome, alunos_reprovados[i].mediaFinal);
    }
}
