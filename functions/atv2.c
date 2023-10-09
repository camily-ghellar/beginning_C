
#include <stdio.h>
#include <stdlib.h>


int Sorteio(){
    
    int aleatorio = (rand() % 9 +1);
    
    return aleatorio;
}


int main(){
    
    int aleatorio;
    int n1=0; 
    int n2=0;
    int n3=0;
    int n4=0;
    int n5=0;
    int n6=0;
    int n7=0;
    int n8=0;
    int n9=0;
    int n10=0;
    
    for(int i = 0; i<100; i++){
        aleatorio = Sorteio();
        if(aleatorio==1){
            n1++;
        }
        else if(aleatorio==1){
            n1++;
        }
        else if(aleatorio==2){
            n2++;
        }
        else if(aleatorio==3){
            n3++;
        }
        else if(aleatorio==4){
            n4++;
        }
        else if(aleatorio==5){
            n5++;
        }
        else if(aleatorio==6){
            n6++;
        }
        else if(aleatorio==7){
            n7++;
        }
        else if(aleatorio==8){
            n8++;
        }
        else if(aleatorio==9){
            n9++;
        }
        else{
            n10++;
        }
        
    }
    
    printf("Quantidade de vezes que cada numero foi sorteado: 1- %d, 2- %d, 3- %d, 5- %d, 6- %d, 7- %d, 8- %d, 9- %d, 10- %d", n1, n2, n3, n4, n5, n6, n7, n8, n9, n10);
    
    return 0;
}
