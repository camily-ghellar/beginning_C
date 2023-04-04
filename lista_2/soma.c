#include <stdio.h>

int main() {

    int  a, b, c, soma;

    printf("Digite o valor de A: ") ;
    scanf("%d", &a)  ;

    printf("Digite o valor de B: ") ;
    scanf("%d", &b)  ;

    printf("Digite o valor de C: ") ;
    scanf("%d", &c)  ;

    soma= a+b;
      
    if (soma>c)
    {
      printf("O valor da soma de A e B é igual a %d", soma);
    }
    
    return 0;
}
  