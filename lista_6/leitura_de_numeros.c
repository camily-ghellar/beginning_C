#include <stdio.h>

int main() {
  int cont_num=0;
  float numero;
  
  scanf("%f", &numero);

  while (numero != 0){
    
    if (numero>100 && numero<200){
       cont_num= cont_num + 1;
    }
    
    scanf("%f", &numero);
}
  
  
  printf("Quantidade de números entre 100 e 200: %d\n", cont_num);
 
  
  return 0;
}
