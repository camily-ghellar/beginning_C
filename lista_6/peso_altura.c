#include <stdio.h>

int main() {
  float peso, altura, media_peso, media_altura, cont=0, peso_total=0, altura_total=0;

  scanf("%f", &peso);

  while (peso >= 0){
    scanf("%f", &altura);
    peso_total = peso_total + peso;
    cont= cont + 1;
    altura_total = altura_total + altura;
    
    scanf("%f", &peso);
}
  
  media_altura = altura_total / cont;
  media_peso = peso_total / cont;
  
  printf("Altura média é: %.2f\n", media_altura);
  printf("O peso médio é: %.2f\n", media_peso);

  
  return 0;
}

