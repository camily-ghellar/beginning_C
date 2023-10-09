#include <stdio.h>
#include <stdlib.h>

int temaDisponivel(int contTema1, int contTema2, int contTema3){
    //tema = 1 -> aplicativos; tema=2 -> redes; tema=3 -> sistemas
    int disponivel;
    int tema1= 2;
    int tema2 = 4;
    int tema3 = 3;

    tema1 = tema1 - contTema1;
    tema2 = tema2 - contTema2;
    tema3 = tema3 - contTema3;

    if(tema1 == 0){
        printf("Vagas para tema Aplicativo esgotadas.");
    }
    else if(tema2==0){
        printf("Vagas para tema Redes esgotadas.");
    }
    else if(tema3==0){
        printf("Vagas para tema Sistemas esgotadas.");
    }

    if(tema1>=0 && tema2>=0 && tema3>=0){
        disponivel = 1;
        }
    else{
        disponivel = 0;
        }

    return disponivel;

}

int totalAlunosOrientados(int contTema1, int contTema2, int contTema3){
    int temVaga = 1;
    int totalOrientados = contTema1+contTema2+contTema3;
    if(totalOrientados>5){
        temVaga = 0;
    }
    return temVaga;
}

void orientadosTema(int tema1, int tema2, int tema3){
    printf("\nAplicativos: %d", tema1);
    printf("\nRedes: %d", tema2);
    printf("\nSistemas: %d\n", tema3);
}

int main(){

    int maxAlunos=5;
    int contTema1=0;
    int contTema2=0;
    int contTema3=0;

    do{
        printf("\nInforme seu nome (aluno): ");
        char nome[20];
        scanf(" %s", &nome);

        printf("\nInforme o tema escolhido (1-aplicativos, 2-redes, 3-sistemas): ");
        int tema;
        scanf("%d", &tema);

        if(contTema1<2){
            if(tema==1){
                contTema1++;
            }
        }
        if(contTema2<4){
            if(tema==2){
                contTema2++;
            }
        }
        if(contTema3<3){
            if(tema==3){
                contTema3++;
            }
        }

        int temTema = temaDisponivel(contTema1, contTema2, contTema3);
        int temVaga = totalAlunosOrientados(contTema1, contTema2, contTema3);

        orientadosTema(contTema1, contTema2, contTema3);

        if(temTema==1 && temVaga==1){
            maxAlunos--;
        }
        else{
            printf("\nTema ou vaga indisponivel");
            break;
        }

        }while(maxAlunos>0);


    return 0;
}
