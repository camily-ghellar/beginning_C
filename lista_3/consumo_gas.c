#include <stdio.h>

int main() {
  
    float consumo, valor_pagar;
  
    printf("Digite o valor do consumo de gás: ");
    scanf("%f", &consumo);

    if (consumo<=10){
      valor_pagar= consumo*15;
        }
    else{
      valor_pagar= consumo*15+20;
    }
    printf("O valor a pagar pelo consumo de gás é de: %.2f", valor_pagar);
      
    return 0;
}
  