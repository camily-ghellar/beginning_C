#include <stdio.h>

int main() {

    float nota1, nota2, nota3, media;
    int faltas;

    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota do aluno: ");
    scanf("%f", &nota3);

    printf("Digite o número de faltas do aluno: ");
    scanf("%d", &faltas);

    media= (nota1+nota2+nota3)/3;

    printf("A média do aluno é de: %.2f\n", media);

    if (media>=6 && faltas<21){
      printf("Aprovado!");
    }
    else{
      if (media<6 && faltas<21){
        printf("Reprovado por nota!");
      }
      else{
        if (media>=6 && faltas>=21){
          printf("Reprovado por falta!");
        }
        else{
          printf("Reprovado por nota e por falta!");
        }
          
      }
    }
  
    return 0;
}
  