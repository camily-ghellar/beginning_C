#include <stdio.h>

int main() {
  float altura_fer= 1.50, altura_mar= 1.20;
  int cont_anos = 0;
  
  while (altura_mar <= altura_fer){
    cont_anos = cont_anos + 1;
    altura_fer= altura_fer + 0.02;
    altura_mar= altura_mar + 0.04;
}
  printf("Marcos será mais alto que Fernando em %d anos.", cont_anos);
  
  return 0;
}