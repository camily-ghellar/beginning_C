
#include <stdio.h>

int main() {
  float pais_A= 50000000, pais_B= 100000000;
  int cont_anos = 0;
  
  while (pais_A <= pais_B){
    cont_anos = cont_anos + 1;
    pais_A = pais_A + (pais_A*0.03);
    pais_B = pais_B + (pais_B*0.02);
}
  printf("Em %d anos o país A se tornará mais populoso que o país B.", cont_anos);
  
  return 0;
}



