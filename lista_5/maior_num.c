#include <stdio.h>
#include <limits.h>


int main() {
  
  int n, maior = INT_MIN;

  for (int x = 1 ; x <= 100; x++){
    
    printf("Digite o número: ");  
    scanf("%d", &n);
    
    if(n>maior){
      maior=n;
    }
  }
  printf("O maior número é o: %d", maior) ;
  return 0;
}
  