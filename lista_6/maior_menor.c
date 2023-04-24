#include <stdio.h>
#include <limits.h>

int main() {
  int num, menor = INT_MAX, maior = INT_MIN;   

  scanf("%d", &num);

  while (num != 0) {
    if (num < menor){
        menor = num;
  }
    if (num > maior){
        maior = num;
    }
    
    scanf("%d", &num);

  }
  
  printf("O maior número informado é %d e o menor é %d.", maior, menor);

  return 0;
}
