#include <stdio.h>

int main()
{
    float media;
    int acimaMedia=0, soma=0;
    int A[9]={9, 8, 6, 7, 5, 9, 6, 4, 8};
    
    for (int x=0; x<9; x++){
        soma= soma + A[x];
    }
    
    media = (float)soma/9;
    
    for (int x=0; x<9; x++){
        if(A[x]>media){
            acimaMedia++;
        }
    }
    
    printf("Quantidade de números acima da média: %d", acimaMedia);
    
    return 0;
}
