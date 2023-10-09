#include <stdio.h>


float AreaTriangulo (){
    int base;
    int altura;
    printf("Digite o tamanho da base: ");
    scanf("%d", &base);
    printf("Digite o tamanho da altura: ");
    scanf("%d", &altura);
    
    float areaTriangulo = (base * altura) / 2;
    return areaTriangulo;
    
}

float AreaRetangulo (){
    int base;
    int altura;
    printf("Digite o tamanho da base: ");
    scanf("%d", &base);
    printf("Digite o tamanho da altura: ");
    scanf("%d", &altura);
    
    float areaRetangulo = base * altura;
    
    return areaRetangulo;
    
}

float AreaCirculo (){
    int raio;
    
    printf("Digite o tamanho do raio: ");
    scanf("%d", &raio);
    
    float areaCirculo = (raio * raio) * 3.14;
    
    return areaCirculo;
    
}

int main(){
    int decisao;
    do{
        printf("\nIniciando o programa.\n");
        printf("Digite um número que represente a ação que deseja:\n1- área do triângulo;\n2-área do retangulo;\n3- área do circulo;\n0- encerrar o programa.\n");
        scanf("%d", &decisao);
        if(decisao == 1){
            float resultT = AreaTriangulo();
            printf("Área do triângulo: %.2f", resultT);
        }
        else if(decisao == 2){
            float resultR = AreaRetangulo();
            printf("Área do retangulo: %.2f", resultR);
        }
        else if(decisao == 3){
            float resultC = AreaCirculo();
            printf("Área do circulo: %.2f", resultC);
        }
        else if(decisao == 0){
            break;
        }
        else{
            printf("Digite um número válido.");
        }
    }
    while(decisao != 0);
    
    printf("Programa encerrado.");
    
}
