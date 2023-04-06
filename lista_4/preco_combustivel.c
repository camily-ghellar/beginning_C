#include <stdio.h>

int main() {
    float capacidade_tanque, valor;
    char tipo_comb;
    int a;

    a=0;

    printf("Digite o tipo do combustível (E - Etanol, D - Diesel ou G - Gasolina): ");
    scanf("%c", &tipo_comb);
  
    printf("Digite a capacidade do tanque em litros: ");
    scanf("%f", &capacidade_tanque);

  
    if (tipo_comb=='E' || tipo_comb=='e'){
      valor= capacidade_tanque * 5.99;
    }
    else{
      if (tipo_comb=='D' || tipo_comb=='d'){
        valor= capacidade_tanque * 6.589;
      }
      else{
        if(tipo_comb=='G' || tipo_comb=='g'){
          valor= capacidade_tanque * 6.99;
        }
        else{
          a=1;
          printf("Favor digitar valores adequados.");
        }
      }
    }
  if(a==0){
    printf("O valor gasto para encher o tanque do veículo é de (em reais): %.3f", valor)  ;
  }

  return 0;
}
  
 