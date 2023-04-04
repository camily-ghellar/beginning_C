//Decomposição de uma substância

#include <stdio.h>
#include <math.h>

main() {
    float t, Q, potencia;
  
    printf("Indique o tempo (t) em minutos: ");
    scanf ("%f", &t);
  
    potencia= -0.5*t;
    Q= 2048 * pow(2,potencia);

    printf("A massa dessa substância após t minutos é: %.2f", Q);
}