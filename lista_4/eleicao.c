#include <stdio.h>

int main() {

  char cand1[30], cand2[30], cand3[30], cand4[30];
  int votos1, votos2, votos3, votos4;

  printf("Digite o nome do primeiro candidato: ");
  scanf("%s", cand1);
  printf("Digite a quantidade de votos do candidato: ");
  scanf("%d", &votos1);

  printf("Digite o nome do segundo candidato: ");
  scanf("%s", cand2);
  printf("Digite a quantidade de votos do candidato: ");
  scanf("%d", &votos2);

  printf("Digite o nome do terceiro candidato: ");
  scanf("%s", cand3);
  printf("Digite a quantidade de votos do candidato: ");
  scanf("%d", &votos3);
  
  printf("Digite o nome do quarto candidato: ");
  scanf("%s", cand4);
  printf("Digite a quantidade de votos do candidato: ");
  scanf("%d", &votos4);

  if (votos1==votos2 || votos1==votos3 || votos1==votos4 || votos2==votos3 || votos2==votos4 || votos3==votos4){
    printf("Houve impate, refaça a eleição!");
  }
  else{
    if(votos1>votos2 && votos1>votos3 && votos1>votos4){
      printf("O candidato que ganhou foi: %s", cand1);
    }
    else{
      if(votos2>votos1 && votos2>votos3 && votos2>votos4){
        printf("O candidato que ganhou foi: %s", cand2);
      }
      else{
        if(votos3>votos1 && votos3>votos2 && votos3>votos4){
          printf("O candidato que ganhou foi: %s", cand3);
        }
        else{
          printf("O candidato que ganhou foi: %s", cand4);
        }
      }
    }
  }
  
  return 0;
}
  