#include <stdio.h>

int main() {
  int cand1=0, cand2=0, cand3=0, nulo4=0, branco5=0, voto, cont_votos=0 ;
  float perc_nulo, perc_branco;
  
  scanf("%d", &voto);

  
  while (voto != 0){
    cont_votos= cont_votos+1;
    if (voto==1){
        cand1=cand1+1;
    }
    else if (voto==2){
        cand2=cand2+1;
    }
    else if (voto==3){
        cand3=cand3+1;
    }
    else if (voto==4){
        nulo4=nulo4+1;
    }
    else{
        branco5=branco5+1;
    }
    
    scanf("%d", &voto);

}
  perc_branco= ((float)branco5/cont_votos)*100;
  perc_nulo= ((float)nulo4/cont_votos)*100;
  
  if (cand1>cand2 && cand1>cand3){
     printf("O ganhador foi o candidato 1\n") ;
  }
  else if (cand2>cand1 && cand2>cand3){
     printf("O ganhador foi o candidato 2\n") ;
  }
  else if (cand3>cand2 && cand3>cand1){
     printf("O ganhador foi o candidato 1\n") ;
  }
  else{
      printf("Houve empate\n");
  }

  printf("Candidato 1: %d\n", cand1);
  printf("Candidato 2: %d\n", cand2);
  printf("Candidato 3: %d\n", cand3);
  printf("Nulo: %d\n", nulo4);
  printf("Branco: %d\n", branco5);
  printf("Porcentagem de votos em branco: %f\n", perc_branco);
  printf("Porcentagem de votos nulos: %f\n", perc_nulo);

  
  return 0;
}
