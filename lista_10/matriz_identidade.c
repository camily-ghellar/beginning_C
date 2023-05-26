#include <stdio.h>

int main(){
   
    int ident[10][10];

    for (int l=0; l<10; l++){
        for (int c=0; c<10; c++){
            ident[l][c]= 0;
            if(l==c){
                ident[l][c]=1;
            }
            printf("%3d", ident[l][c]);
        }
        printf("\n");
    }
    
    return 0;
}
