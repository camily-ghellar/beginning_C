#include <stdio.h>

int main() {

  int n, idade, idade_total=0, cont_menos18=0, cont_18_22=0, cont_mais22=0;
  float media_idade=0, percentual_menos18, percentual_18_22, percentual_mais22;

   printf("Digite a quantidade de idades: ");
   scanf("%d", &n);

  for (int x = 1 ; x <= n; x++){

    printf("Digite a idade: ");
    scanf("%d", &idade);

    idade_total= idade_total + idade;

    if(idade<18){
      cont_menos18++;
    }
    else{
      if(idade>=18 && idade<=22){
        cont_18_22++;
      }
      else{
        cont_mais22++;
      }
    }
  }

  media_idade= idade_total/(float)n;
  percentual_menos18= (cont_menos18/(float)n)*100.0;
  percentual_18_22= (cont_18_22/(float)n)*100.0;
  percentual_mais22= (cont_mais22/(float)n)*100.0;


  printf("A média das idades informadas é: %.2f\n", media_idade) ;
  printf("O percentual de idades menores de 18 anos é: %.2f\n", percentual_menos18) ;
  printf("O percentual de idades entre 18 e 22 anos é: %.2f\n", percentual_18_22) ;
  printf("O percentual de idades maiores de 22 anos é: %.2f\n", percentual_mais22) ;

  return 0;
}
