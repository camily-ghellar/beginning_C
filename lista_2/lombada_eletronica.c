#include <stdio.h>

int main() {

    float velocidade, multa;

    printf("Digite a velocidade, em km/h do carro: ") ;
    scanf("%f", &velocidade)  ;
      
    if (velocidade>60){
      multa= 10*(velocidade-60);
      printf("Multado! E o valor da multa é %.2f", multa);
    }
   
    
    return 0;
}
  