#include <stdio.h>
#include <limits.h>

int main() {
  
  int n, menor = INT_MAX, maior = INT_MIN;
  
  for (int x = 1 ; x <= 100; x++){
    
    printf("Digite o número: ");  
    scanf("%d", &n);
    
    if(n>maior){
      maior=n;
    }

    if(n<menor){
      menor=n;
    }
  }
  printf("O maior número é o: %d\n", maior) ;
  printf("O menor número é o: %d", menor) ;
  return 0;
}
  