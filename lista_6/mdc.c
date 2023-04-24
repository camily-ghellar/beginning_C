#include <stdio.h>

int main() {
   int a, b, resto, mdc, a1, b1;
   
   scanf("%d", &a);
   scanf("%d", &b);
   
   a1= a;
   b1= b;

   while (b != 0) {
      resto = a % b;
      a = b;
      b = resto;
   }

   mdc = a;
   
   printf("O MDC de %d e %d é: %d\n", a1, b1, mdc);
   
   return 0;
}

