#include <stdio.h>
int main(){
  float n1, n2, adicao, subtracao, multiplicacao, divisao;
  char operacao;

  printf("Digite o primeiro número: ");
  scanf("%f", &n1);
  printf("Digite a operação a ser realizada (+, -, * ou /): ");
  scanf(" %c", &operacao);
  printf("Digite o segundo número: ");
  scanf("%f", &n2);
  
  switch (operacao){
  case '+':
    adicao= n1 + n2;
    printf("%.2f + %.2f = %.2f", n1, n2, adicao);
    break;
  case '-':
    subtracao= n1 - n2;
    printf("%.2f - %.2f = %.2f", n1, n2, subtracao);
    break;
  case '*':
    multiplicacao= n1 * n2;
    printf("%.2f * %.2f = %.2f", n1, n2, multiplicacao);
    break;
  case '/':
    divisao= n1 / n2;
    printf("%.2f / %.2f = %.2f", n1, n2, divisao);
    break;
  default:
    printf("%.2f %c %.2f = Operador inválido!", n1, operacao, n2);
  }
  
return 0;
}