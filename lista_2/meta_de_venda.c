#include <stdio.h>

int main() {

    float  valor_venda;

    printf("Digite o valor de venda do mês: ") ;
    scanf("%f", &valor_venda)  ;
    
    if (valor_venda>30000){
      printf("Parabéns, você superou a meta do mês!");
    }
    
    return 0;
}
  