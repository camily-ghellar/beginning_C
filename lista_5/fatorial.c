#include <stdio.h>

int main() {
  
  int n = 1;
  int cont;

  printf("Digite o número: ");  
  scanf("%d", &cont);

  for (int x = 1 ; x <= cont; x++){
    n = n * x;
   
  }

  printf("O fatorial do número informado é: %d\n", n);
  
  return 0;
}
  