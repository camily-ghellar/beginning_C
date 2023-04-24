#include <stdio.h>

int main() {
  int idade, idade_m=0, idade_f=0, homem_idoso=0, mulher_idosa=0, cont_m=0, cont_f=0, cont_25_33=0, cont_18_25=0;
  float media_idade_m, media_idade_f, perc_m, perc_f;
  char sexo;
  
  scanf("%d", &idade);


  while (idade > 0){
    scanf(" %c", &sexo);
    
    if (sexo=='f' || sexo =='F'){
        cont_f= cont_f + 1;
        idade_f = idade_f + idade;
        if(idade > 18 && idade < 25){
            cont_18_25 = cont_18_25 + 1;
        }
        if (idade > mulher_idosa){
            mulher_idosa = idade;
        }
    }
    else if (sexo=='M' || sexo =='m'){
        cont_m= cont_m + 1;
        idade_m= idade_m + idade;
        if(idade > 25 && idade < 33){
            cont_25_33 = cont_25_33 + 1;
        }
        if (idade > homem_idoso){
            homem_idoso = idade;
        }
    }
    else{
        printf("Erro.");
    }
    
    scanf("%d", &idade);
}
  
  media_idade_f= (float)idade_f/cont_f;
  media_idade_m= (float)idade_m/cont_m;
  
  perc_f = ((float)cont_18_25 / cont_f) * 100;
  perc_m = ((float)cont_25_33 / cont_m) * 100;
  
  printf("A média de idade dos homens é de: %.2f anos \n", media_idade_m);
  printf("A média de idade das mulheres é de: %.2f anos \n", media_idade_f);

  printf("O percentual de homens entre 25 e 33 anos é de: %.2f %% \n", perc_m);
  printf("O percentual de mulheres entre 18 e 25 anos é de: %.2f %% \n", perc_f);

  printf("O homem mais idoso tem %d anos \n", homem_idoso);
  printf("A mulher mais idosa tem %d anos \n", mulher_idosa);

  return 0;
}
