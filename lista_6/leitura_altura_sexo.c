#include <stdio.h>

int main() {
  int altura_f=0, altura_m=0;
  float soma_f=0, soma_m=0, altura, media_f, media_m;
  char sexo;
  
  scanf(" %c", &sexo);

  while (sexo != 'x'){
    scanf("%f", &altura);
    if (sexo=='f' || sexo =='F'){
        altura_f= altura_f+1;
        soma_f= soma_f+altura;
    }
    else if (sexo=='M' || sexo =='m'){
        altura_m= altura_m+1;
        soma_m= soma_m+altura;
    }
    
    scanf(" %c", &sexo);
}
  
  media_m= soma_m/altura_m;
  media_f= soma_f/altura_f;
  
  printf("Altura média do sexo feminino: %.2f\n", media_f);
  printf("Altura média do sexo masculino: %.2f\n", media_m);


  
  
  return 0;
}
