//Área e perímetro de um retângulo

#include <stdio.h>

main() {
    float base, altura, perimetro, area;
  
    printf ("Digite a base do triângulo:");
    scanf ("%f", &base);

    printf ("Digite a altura do triângulo:");
    scanf ("%f", &altura);  

    perimetro = 2* (base + altura)  ;
    
    area= base * altura;

    printf("O perímetro do triângulo é: %.2f\n", perimetro);
    printf("A área do triângulo é: %.2f", area);

}