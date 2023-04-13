#include <stdio.h>

int main() {
  
  int n;
  float soma=0;

  printf("Digite o número: ");  
  scanf("%d", &n);
    
  for (int x = 1 ; x<=n; x++){
    soma= soma + (float) 1/(2*x);
    
    printf("%f\n", soma);
  }

  return 0;
}
  