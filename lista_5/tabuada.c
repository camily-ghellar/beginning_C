#include <stdio.h>

int main() {
  
  int n, multiplicacao;

  printf("Digite o número: ");  
  scanf("%d", &n);

  for (int x = 1 ; x<=10; x++){
    multiplicacao= n*x;
    printf("%d\n", multiplicacao);
        }        

  return 0;
}
  