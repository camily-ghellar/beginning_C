#include <stdio.h>

int main() {
  char sexo;
  int idade, mulheres= 0, soma_idade= 0;
  float porcentagem_mulheres, porcentagem_homens, media_idade;

  for (int x = 1 ; x <= 500; x++){

    printf("Digite o sexo: ");
    scanf(" %c", &sexo);

    printf("Digite a idade: ");  
    scanf("%d", &idade);

    soma_idade= soma_idade+idade;

    if (sexo=='F' || sexo=='f'){
      mulheres= mulheres+1;    
    }
  }

  porcentagem_mulheres = (mulheres/500.0)*100.0;
  porcentagem_homens= 100-porcentagem_mulheres;
  
  media_idade= soma_idade/500;
  
  printf("A média das idades é de: %.2f\n", media_idade);

  printf("A porcentagem de mulheres é de: %.2f\n", porcentagem_mulheres);

  printf("A porcentagem homens é de: %.2f\n", porcentagem_homens);


  
  return 0;
}
  