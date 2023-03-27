//Aumento salário

#include <stdio.h>

main() {
    float salario, porcentagem, nova_porcentagem, novo_salario;
  
    printf ("Digite o salário:");
    scanf ("%f", &salario);

    printf ("Digite a taxa de porcentagem de aumento do salário:");
    scanf ("%f", &porcentagem);  
    
    nova_porcentagem = (porcentagem+100)/100;

    novo_salario = salario * nova_porcentagem ;

    printf("O novo salário é: %.2f", novo_salario);
        

}