#include <stdio.h>

int main() {
  
    float valor_compra, valor_venda;
  
    printf("Digite o valor de compra do produto: ");
    scanf("%f", &valor_compra);

    if (valor_compra<100){
      valor_venda= valor_compra*1.40;
        }
    else{
      valor_venda= valor_compra*1.30;
    }
    printf("O valor de venda do produto é de: %.2f", valor_venda);
      
    return 0;
}
  