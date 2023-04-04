#include <stdio.h>
//1 = domingo, 2 = segunda-feira, ..., 7 = sábado

int main() {
  
    int dia;
  
    printf("Digite um número: ");
    scanf("%d", &dia);

    if (dia==1){
      printf("Domingo");
        }
    else{
      if (dia==2){
        printf("Segunda-feira");
      }
      else{
        if (dia==3){
          printf("Terça-feira");
        }
        else{
          if (dia==4){
            printf("Quarta-feira");
          }
          else{
            if (dia==5){
              printf("Quinta-feira");
            }
            else{
              if (dia==6){
                printf("Sexta-feira");
              }
                else{
                  if (dia==7){
                    printf("Sábado");
                  }
                    else{
                      printf("Número não corresponde a dia da semana.");
                    }
                  }
                }
              }
            }
          }
        }
    
    return 0;
}
  