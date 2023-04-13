#include <stdio.h>

int main() {
  
  int n, produto= 1, aux=0;

  printf("Digite o número: ");  
  scanf("%d", &n);

  for (int x = 1 ; x*(x+1)*(x+2)<=n; x++){
    if(x*(x+1)*(x+2)==n){
        printf("É um número triângular!\n");
        aux =1;
        }        
    }
  if (aux==0){
      printf("Não é um número triângular!");
  }

  return 0;
}
  