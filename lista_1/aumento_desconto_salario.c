//Aumento e desconto salário

#include <stdio.h>

main() {
    float salario, salario_aumentado, salario_diminuido;
  
    printf ("Digite o salário:");
    scanf ("%f", &salario);


    salario_aumentado = salario * 1.20 ;
  
    salario_diminuido = salario_aumentado * 0.90;

    printf("O salário inicial é: %.2f \n", salario);
    printf("O salário aumentado em 20% é: %.2f \n", salario_aumentado);
    printf("O salário menos os impostos é: %.2f", salario_diminuido);
        

}