#include <stdio.h>

int main() {

    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota do aluno: ");
    scanf("%f", &nota3);

    media= (nota1+nota2+nota3)/3;

    if (media>=6){
      printf("Aprovado!");
    }
    else{
      printf("Reprovado!");
    }
  
    return 0;
}
  