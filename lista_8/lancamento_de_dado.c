#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    int lancamentos=100, cont1=0, cont2=0, cont3=0, cont4=0, cont5=0, cont6=0;
    float resultados[lancamentos];
    
    srand(time(NULL));

    for (int x=0; x<lancamentos; x++){
	    resultados[x] = rand()%6+1;
	    
        if (resultados[x] == 1) {
            cont1++;
        }
        else if (resultados[x] == 2) {
            cont2++;
        }
        else if (resultados[x] == 3) {
            cont3++;
        }
        else if (resultados[x] == 4) {
            cont4++;
        }
        else if (resultados[x] == 5) {
            cont5++;
        }
        else{
            cont6++;
        }
    }
    
    printf("O valor 1 saiu %d vezes.\n", cont1);
    printf("O valor 2 saiu %d vezes.\n", cont2);
    printf("O valor 3 saiu %d vezes.\n", cont3);
    printf("O valor 4 saiu %d vezes.\n", cont4);
    printf("O valor 5 saiu %d vezes.\n", cont5);
    printf("O valor 6 saiu %d vezes.\n", cont6);




    return 0;
}
