#include <stdio.h>

int main() {
  int num, aux=1, cont, num1;   

  scanf("%d", &num);
  num1 = num;

  while (num > 0) {
    num = num - aux;  
    aux = aux + 2;
    cont = cont + 1;
  }
  
  cont = cont -1;
  
  printf("A parte inteira da raiz quadrada de %d é %d.", num1, cont);

  return 0;
}
