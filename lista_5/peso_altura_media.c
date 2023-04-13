#include <stdio.h>

int main() {
  
  float peso, altura, peso_medio, altura_media, peso_total, altura_total;
  
  for (int x = 1 ; x <= 1000; x++){
    
    printf("Digite o peso: ");  
    scanf("%f", &peso);

    printf("Digite a altura: ");  
    scanf("%f", &altura);
    
    peso_total= peso_total + peso;

    altura_total= altura_total + altura;

  }
  
  peso_medio= peso_total/1000.0;
  altura_media= altura_total/1000.0;
  
  printf("O peso médio das pessoas é: %.2f\n", peso_medio) ;
  printf("A altura média das pessoas é: %.2f", altura_media) ;
  return 0;
}
  