#include <stdio.h>

int main() {
  
  int n, soma=1, a=1, b=0;

  printf("Digite a quantidade de números da sequência de Fibonacci que você deseja: ");  
  scanf("%d", &n);

  for (int x = 1 ; x < n; x++){
    if (soma==1 && b==0){
      printf("1,");
    }
    soma= a+b;
    b=a;
    a=soma;
    printf(", %d", soma);
  }
  
  return 0;
}