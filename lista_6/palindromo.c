#include <stdio.h>

int main() {
  int num, aux, reverso=0;   

  scanf("%d", &num);

  aux = num;

  while (aux != 0) {
    reverso = aux % 10 + reverso * 10;  
    aux = aux / 10; 
  }

  if (reverso == num)
    printf("%d é palindromo\n", num);
  else
    printf("%d não é palindromo\n", num);

  return 0;
}
