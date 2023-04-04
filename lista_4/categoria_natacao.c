#include <stdio.h>

int main() {
  
    int idade;
  
    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade>=0 && idade<=10){
      printf("Categoria Infantil – 0 a 10 anos");
        }
    else{
      if (idade>=11 && idade<=17){
        printf("Categoria Juvenil – 11 a 17 anos");
      }
      else{
        if (idade>=18 && idade<=64){
          printf("Categoria Adulto – 18 a 64 anos")  ;
        }
        else{
          printf("Categoria Sênior – 65 ou mais anos.");
        }
      }
    }
    
    return 0;
}
  