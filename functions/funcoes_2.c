#include <stdio.h>


float MedirKmL (int km, int litros){
    float kmL = km / litros;
    return kmL;
    
}

int ImprimirKmL(float kmL){
    
    if(kmL < 8){
        printf("Consumo menor que 8. Venda o carro!");
    }
    else if(kmL > 8 && kmL <= 12){
        printf("Entre 8 e 12. Economico!");
    }
    else{
        printf("Maior que 12. Super Economico.");
    }
}

int main(){
    
    int km;
    int litros;
    
    printf("Digite os km: ");
    scanf("%d", &km);
    
    printf("Digite os litros: ");
    scanf("%d", &litros);
    
    int resultado = MedirKmL(km, litros);
    ImprimirKmL(resultado);
}
