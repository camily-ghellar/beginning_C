#include <stdio.h>

int main() {

    float valor_compra, novo_valor;

    printf("Digite o valor da compra: ") ;
    scanf("%f", &valor_compra)  ;
      
    if (valor_compra>200){
      novo_valor= valor_compra*(1-0.15);
      printf("O novo valor, com 15%% de desconto é %.2f", novo_valor);
    }
    else{
      printf("O valor da compra não teve desconto, então continua sendo %.2f", valor_compra);
    }
    
    return 0;
}
  