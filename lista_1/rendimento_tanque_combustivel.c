//Rendimento tanque combustível

#include <stdio.h>

main() {
    float km_antes, km_depois, comb_gasto, capacidade_tanque, km_tanque_cheio;
  
    printf("Indique a quilometragem do veículo antes da viagem: ");
    scanf ("%f", &km_antes);
  
    printf("Indique a quilometragem do veículo depois da viagem: ");
    scanf ("%f", &km_depois);
  
    printf("Indique a quantidade de litros de combustível gasto na viagem: ");
    scanf ("%f", &comb_gasto);

    printf("Indique a capacidade do tanque de combustível: ");
    scanf ("%f", &capacidade_tanque);

    km_tanque_cheio = capacidade_tanque*((km_depois - km_antes)/comb_gasto);

    printf("Com o tanque cheio, o carro percorre o seguinte número de quilometros: %.2f", km_tanque_cheio);
}