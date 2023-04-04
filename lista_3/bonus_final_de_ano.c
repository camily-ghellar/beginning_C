#include <stdio.h>

int main() {

    float salario, bonus;
    int tempo;
  
    printf("Digite o salário do colaborador: ");
    scanf("%f", &salario);

    printf("Digite o tempo de casa do colaborador: ");
    scanf("%d", &tempo);

    if (tempo<3){
      bonus= salario/2;
      printf("O bônus do colaborador será de %.2f", bonus);
    }
    else{
      bonus= salario*0.75;
      printf("O bônus do colaborador será de %.2f", bonus);
    }
  
    return 0;
}