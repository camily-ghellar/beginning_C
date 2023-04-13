#include <stdio.h>

int main() {
  int multiplicando, multiplicador; 
  int produto = 0;
  
  printf("Digite o multiplicador: ");
  scanf("%d", &multiplicador);

  printf("Digite o multiplicando: ");  
  scanf("%d", &multiplicando);
  
  for (int x = 1 ; x <= multiplicador; x++){
    produto = produto+ multiplicando;
  }
  
  printf("Produto dos números informados: %d", produto);
  return 0;
}
  