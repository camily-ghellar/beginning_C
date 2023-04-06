#include <stdio.h>

int main() {
    int num_matricula, ultimo_digito;
  
    printf("Digite o número da matrícula: ");
    scanf("%d", &num_matricula);

    ultimo_digito= num_matricula%10;
  
    if (ultimo_digito==0 || ultimo_digito==1 || ultimo_digito==2){
      printf("pagamento até 10/fevereiro");
        }
    else{
      if (ultimo_digito==3 || ultimo_digito==4 || ultimo_digito==5){
        printf("pagamento até 10/abril");
      }
      else{
        if (ultimo_digito==6 || ultimo_digito==7){
          printf("pagamento até 10/junho")  ;
        }
        else{
          printf("pagamento até 10/agosto");
        }
      }
    }
    
    return 0;
}
  