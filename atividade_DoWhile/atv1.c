#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int random_n, n_usuario, cont_tent=0, aux=0;
    
	srand(time(NULL));
    
	random_n = rand() % 100;
    
	do{

    		printf("Digite um número: ");
    		scanf("%d", &n_usuario);
   	 
    		cont_tent++;

    		if (n_usuario == random_n){
        			printf("O número é o %d. Acertou em %d tentativas.", random_n, cont_tent);
        			aux = 1;}
       	 
    		else if (n_usuario>random_n){
        			printf("Seu número é maior do que o meu.\n");}

    		else{
        			printf("Seu número é menor do que o meu.\n");}
   	 
	}while(aux==0);
    
	return 0;
}

