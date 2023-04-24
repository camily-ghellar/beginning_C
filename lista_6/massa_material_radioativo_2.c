#include <stdio.h>

int main() {
  int horas=0, minutos=0, segundos=0;
  float massa_inicial;
  
  scanf("%f", &massa_inicial);

  while (massa_inicial>=1){
    massa_inicial= massa_inicial - (massa_inicial*0.001);
    segundos = segundos + 1 ;
}
  if (segundos>60){
    minutos = segundos/60;
    segundos= segundos%60;
  }
 
  if (minutos>60){
    horas = minutos/60;
  }

  printf("%dh %dmin %ds", horas, minutos, segundos);


  
  
  return 0;
}

