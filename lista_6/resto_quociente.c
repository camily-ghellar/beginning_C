#include <stdio.h>

int main() {
  int numA, numB, quociente=0, resto, aux;
  
  scanf("%d", &numA);
  scanf("%d", &numB);
  aux = numA;
  
  while (aux > 0){
    if (aux < numB) {
        break;
    }
    quociente = quociente + 1;
    aux = aux - numB;
  }
  
  resto = aux;
  printf("Quociente: %d; Resto: %d", quociente, resto);
  
  return 0;
}