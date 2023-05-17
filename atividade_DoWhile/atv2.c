#include <stdio.h>

int main(){

    int num1, den1, num2, den2, result_den, result_num, mdc, aux1, aux2;
    char decisao, oper;
    
    do{
   	 printf("\nDigite o numerador da primeira fração: ");
   	 scanf("%d", &num1);
   	 printf("Digite o denominador da primeira fração: ");
   	 scanf("%d", &den1);
   	 printf("Digite a operação: ");
   	 scanf(" %c", &oper);
   	 printf("Digite o numerador da segunda fração: ");
   	 scanf("%d", &num2);
   	 printf("Digite o denominador da segunda fração: ");
   	 scanf("%d", &den2);
   	 printf("Deseja realizar outro cálculo?: ");
   	 scanf(" %c", &decisao);
  		 
  	 if(num1==0 || den1==0 || num2==0 || den2==0){
  	 	printf("Não foi possível realizar a operação.");
  	 }
  	 else{
   		switch (oper){
       		case '/':
       		result_num = num1*den2;
       		result_den = den1*num2;
       		aux1=result_num;
       		aux2=result_den;

       		do{
				int resto = aux1 % aux2;
              	aux1 = aux2;
              	aux2 = resto;
 			}while (aux2 != 0);

            mdc = aux1;
            result_num = result_num / mdc;
            result_den = result_den / mdc;
            if(result_den==1){
            	printf("%d/%d / %d/%d = %d", num1, den1, num2, den2, result_num);
            	}
            else{
       			printf("%d/%d / %d/%d = %d/%d", num1, den1, num2, den2, result_num, result_den);
            	}
       	break;
      		 
       		 case '*':
       		 result_num = num1*num2;
       		 result_den = den1*den2;
       		 aux1=result_num;
       		 aux2=result_den;

       		 do{
              	int resto = aux1 % aux2;
              	aux1 = aux2;
              	aux2 = resto;
			}while (aux2 != 0);

            mdc = aux1;
        	result_num = result_num / mdc;
        	result_den = result_den / mdc;
        	if(result_den==1){
           		printf("%d/%d * %d/%d = %d", num1, den1, num2, den2, result_num);
            	}
           	else{
   				printf("%d/%d * %d/%d = %d/%d", num1, den1, num2, den2, result_num, result_den);
       		 break;
      		 
       		 case '+':
       		 result_num = (num1*den2) + (num2*den1);
       		 result_den = den1*den2;
       		 aux1=result_num;
       		 aux2=result_den;

       		 do{
              	int resto = aux1 % aux2;
              	aux1 = aux2;
              	aux2 = resto;
}			while (aux2 != 0);

            mdc = aux1;
        	result_num = result_num / mdc;
        	result_den = result_den / mdc;
        	if(result_den==1){
           		printf("%d/%d + %d/%d = %d", num1, den1, num2, den2, result_num);
            	}
           	else{
       			printf("%d/%d + %d/%d = %d/%d", num1, den1, num2, den2, result_num, result_den);
            	}
       		 break;
      		 
       		 case '-':
       		 result_num = (num1*den2) + ((-1*num2)*den1);
       		 result_den = den1*den2;
       		 aux1=result_num;
       		 aux2=result_den;

       		 do{
              	int resto = aux1 % aux2;
              	aux1 = aux2;
              	aux2 = resto;
			}while (aux2 != 0);

            mdc = aux1;
            result_num = (-1*result_num) / mdc;
            result_den = (-1*result_den) / mdc;
            if(result_den==1){
            		printf("%d/%d - %d/%d = %d", num1, den1, num2, den2, result_num);
            	}
            else{
       			printf("%d/%d - %d/%d = %d/%d", num1, den1, num2, den2, result_num, result_den);
            	}
       		 break;
      		 
       		 default:
       		 printf("Erro.");
       		 }
   		 }
  	 }
  		 
    } while(decisao=='Y');

    return 0;
}
