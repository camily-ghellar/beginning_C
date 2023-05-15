#include <stdio.h>

int main(){
    
    int alunos=30;
    float medias[alunos], nota1[alunos], nota2[alunos], nota3[alunos];

    for (int x=0; x<alunos; x++){
        scanf("%f", &nota1[x]);
        scanf("%f", &nota2[x]);
        scanf("%f", &nota3[x]);
        medias[x]= (nota1[x]+nota2[x]+nota3[x])/3;
    }
    
    printf("N1    N2    N3    Média\n");
    
    for(int x=0; x<alunos; x++){
        printf("%.2f  %.2f  %.2f  %.2f\n", nota1[x], nota2[x], nota3[x], medias[x]);
    }

    return 0;
}
