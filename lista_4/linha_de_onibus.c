#include <stdio.h>

int main() {
  
    int linha;
  
    printf("Digite o número da linha de ônibus: ");
    scanf("%d", &linha);

    if (linha==1){
      printf("1- Bela Vista");
        }
    else{
      if (linha==2){
        printf("2- Figueira");
      }
      else{
        if (linha==3){
          printf("3– Sta Terezinha")  ;
        }
        else{
          printf("Código inexistente.");
        }
      }
    }
    
    return 0;
}
  