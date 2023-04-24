#include <stdio.h>

int main() {
  int cont_par = 0, cont_impar, num;
  
  scanf("%d", &num);
  
  while (num>=0){
    if (num % 2 == 0){
        cont_par= cont_par + 1;
    }
    else{
        cont_impar= cont_impar + 1;
    }
    
    scanf("%d", &num);
}
  printf("Quantidade de números pares: %d\n", cont_par);
  printf("Quantidade de números ímpares: %d\n", cont_impar);

  
  return 0;
}

