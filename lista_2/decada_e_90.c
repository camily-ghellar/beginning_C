#include <stdio.h>

int main() {

    int  ano_nascimento;

    printf("Digite o ano do seu nascimento: ") ;
    scanf("%d", &ano_nascimento)  ;
    
    if (ano_nascimento >= 1990 && ano_nascimento <= 1999)
    {
      printf("Você nasceu na década de 90, não é mais adolescente :(");
    }
    
    return 0;
}
  