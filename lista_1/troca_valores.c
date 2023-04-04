//Troca de valores

#include <stdio.h>

main() {
    float A, B, c;
  
    printf("Indique o valor de A: ");
    scanf ("%f", &A);
  
    printf("Indique o vlaor de B: ");
    scanf ("%f", &B);
    
    c= A;
    A= B;
    B= c;

    printf("O valor de A agora é %.2f\n", A);
    printf("O valor de B agora é %.2f", B);
}