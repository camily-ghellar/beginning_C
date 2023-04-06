#include <stdio.h>

int main() {
    int dia_vencimento, mes_vencimento, ano_vencimento, dia_hoje, mes_hoje, ano_hoje;

    printf("Digite o ano do vencimento: ");
    scanf("%d", &ano_vencimento);
  
    printf("Digite o mês do vencimento: ");
    scanf("%d", &mes_vencimento);

    printf("Digite o dia do vencimento: ");
    scanf("%d", &dia_vencimento);

    printf("Digite o ano atual: ");
    scanf("%d", &ano_hoje);

    printf("Digite o mês atual: ");
    scanf("%d", &mes_hoje);

    printf("Digite o dia atual: ");
    scanf("%d", &dia_hoje);
  
    if (ano_vencimento<ano_hoje) {
      printf("Produto vencido!");
    }
    else{
      if(ano_vencimento==ano_hoje && mes_vencimento<mes_hoje){
        printf("Produto vencido!");
      }
      else{
        if(ano_vencimento==ano_hoje && mes_vencimento==mes_hoje && dia_vencimento<dia_hoje){
          printf("Produto vencido!");
        }
        else{
          printf("O produto não está vencido.");
        }  
      }
    }
  return 0;
}
  
 
 