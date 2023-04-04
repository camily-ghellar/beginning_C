#include <stdio.h>

int main() {

    int ano_nascimento1, ano_nascimento2;

    printf("Digite o ano de nascimento da primeira pessoa: ");
    scanf("%d", &ano_nascimento1);

    printf("Digite o ano de nascimento da segunda pessoa: ");
    scanf("%d", &ano_nascimento2);

    if (ano_nascimento1==ano_nascimento2){
      printf("As duas pessoas têm a mesma idade.");
    }
    else{
      if (ano_nascimento1<ano_nascimento2){
        printf("A pessoa mais velha nasceu em %d", ano_nascimento1);
      }
      else{
        printf("A pessoa mais velha nasceu em %d", ano_nascimento2);
      }
    }

    return 0;
}
  