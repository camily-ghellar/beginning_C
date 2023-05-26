#include <stdio.h>
#include <stdlib.h>

int main(){
   
    int matriz[4][4], posicao_maior[2], posicao_menor[2], maior, menor;

    for (int l=0; l<4; l++){
        for (int c=0; c<4; c++){
            matriz[l][c]= rand()%100;
            printf("%5d", matriz[l][c]);
            
            if(l==0 && c==0){
                maior = matriz[l][c];
                menor = matriz[l][c];
            }
            else if(matriz[l][c] > maior){
                maior = matriz[l][c];
                posicao_maior[0] = l;
                posicao_maior[1] = c;
            }
            else if(matriz[l][c] < menor){
                menor = matriz[l][c];
                posicao_menor[0] = l;
                posicao_menor[1] = c;
            }
        }
        printf("\n");
    }
    printf("\n");

    printf("Posição do maior número da matriz:\n Linha: %d ;  Coluna: %d .\n", posicao_maior[0], posicao_maior[1]);
    printf("Posição do menor número da matriz:\n Linha: %d ;  Coluna: %d .",  posicao_menor[0], posicao_menor[1]);


    return 0;
}
