//Caixa eletrônico

#include <stdio.h>

main() {
  //100, 50, 20, 10  e 5 reais
  
    int valor_sacado; 
  
    printf("Digite o valor a ser sacado (só pode valores inteiros, sem centavos, e terminados em 0 ou 5): ");
    scanf("%d", &valor_sacado);
      
    int cedulas_cem = 0; //declarando e inicializando a variável de controle
    while (valor_sacado >= 100) // Testando a condição
  {
    valor_sacado= valor_sacado - 100; //Executando um comando dentro do laço
    
    cedulas_cem++; //atualizando a variável de controle
  }        

    int cedulas_cinquenta = 0; //declarando e inicializando a variável de controle
    while (valor_sacado >= 50) // Testando a condição
  {
    valor_sacado= valor_sacado - 50; //Executando um comando dentro do laço
    
    cedulas_cinquenta++; //atualizando a variável de controle
  }      

  int cedulas_vinte= 0; //declarando e inicializando a variável de controle
    while (valor_sacado >= 20) // Testando a condição
  {
    valor_sacado= valor_sacado - 20; //Executando um comando dentro do laço
    
    cedulas_vinte++; //atualizando a variável de controle
  }  


  int cedulas_dez = 0; //declarando e inicializando a variável de controle
    while (valor_sacado >= 10) // Testando a condição
  {
    valor_sacado= valor_sacado - 10; //Executando um comando dentro do laço
    
    cedulas_dez++; //atualizando a variável de controle
  }  

  
  int cedulas_cinco = 0; //declarando e inicializando a variável de controle
    while (valor_sacado >= 5) // Testando a condição
  {
    valor_sacado= valor_sacado - 5; //Executando um comando dentro do laço
    
    cedulas_cinco++; //atualizando a variável de controle
  }  

  
  
    printf("Quantidade de notas de 100 emitidas no caixa eletrônico: %d\n", cedulas_cem);
    printf("Quantidade de notas de 50 emitidas no caixa eletrônico: %d\n", cedulas_cinquenta);
    printf("Quantidade de notas de 20 emitidas no caixa eletrônico: %d\n", cedulas_vinte);
    printf("Quantidade de notas de 10 emitidas no caixa eletrônico: %d\n", cedulas_dez);
    printf("Quantidade de notas de 5 emitidas no caixa eletrônico: %d", cedulas_cinco);
}