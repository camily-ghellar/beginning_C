#include <stdio.h>
#include <stdlib.h>

int main(){
   
    float notas_alunos[20][4];

    printf("Nota 1  Nota 2  Nota 3  Média\n");

    for (int l=0; l<20; l++){
        for (int c=0; c<3; c++){
            notas_alunos[l][c]= rand()%10;
        }
    }
    
    for (int l=0; l<20; l++){
        float soma=0;
        for (int c=0; c<4; c++){
            soma += notas_alunos[l][c]; 
            if(c==3){
                notas_alunos[l][3] = soma/3;
            }
            printf("%.1f     ", notas_alunos[l][c]);
        }
        printf("\n");
    }

    
    return 0;
}
