//Triângulo Equilátero: os comprimentos dos 3 lados são iguais.
//Triângulo Isósceles: os comprimentos de 2 lados são iguais.
//Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.

#include <stdio.h>
#include<stdbool.h>

int VerificaTriangulo(float x, float y, float z){
    
    bool ehTriangulo = false;
    int qualTriangulo = 0; //1- Triângulo Equilátero; 2- Triângulo Isósceles; 3- Triângulo Escaleno
    
    if((x+y)>z && (z+y)>x && (x+z)>y){
        ehTriangulo = true;
    }
    
    if(ehTriangulo){
        if(x!=y && x!=z && y!=z){
            qualTriangulo = 3;
        }
        else if(x==y && x==z && y==z){
            qualTriangulo = 1;
        }
        else{
            qualTriangulo = 2;
        }
    }
    return qualTriangulo;
}


int main(){
    
    float x, y, z;
    char decisao;
    printf("Deseja iniciar a função? Se sim, digite 's', se não, digite 'n'.");
    scanf(" %c", &decisao);
    
    if(decisao == 's'){
        printf("Digite o x: ");
        scanf("%f", &x);
        
        printf("Digite o y: ");
        scanf("%f", &y);
        
        printf("Digite o z: ");
        scanf("%f", &z);
        
        int triangulo = VerificaTriangulo(x, y, z);
    
        if(triangulo == 1){
            printf("Tringulo Equilátero");
        }
        else if(triangulo == 2){
            printf("Tringulo Isósceles");
        }
        else if(triangulo == 3){
            printf("Tringulo Escaleno");
        }
        else{
            printf("Nao e triangulo.");
        }
        
    }
    else{
        printf("Programa finalizado");
    }
    
    
    return 0;
}
