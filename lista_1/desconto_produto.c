//Desconto produto
#include <stdio.h>

main() {
    float valor_produto, porcentagem, nova_porcentagem, novo_valor, desconto;
  
    printf ("Digite o valor do produto:");
    scanf ("%f", &valor_produto);

    printf ("Digite a taxa de porcentagem de desconto do valor do produto:");
    scanf ("%f", &porcentagem);  
    
    nova_porcentagem = (100-porcentagem)/100;
  
    novo_valor= valor_produto * nova_porcentagem;
 
    desconto= valor_produto - novo_valor;
  
    printf("O valor do desconto é: %.2f \n", desconto);
    printf("O valor do produto com desconto é: %.2f", novo_valor);
        

}