#include <stdio.h>

int main(){
    
    int num[50], aux=49;
    
    for (int x=0; x<50; x++){
        scanf("%d", &num[x]);
    }
    
    while(aux>=0){
        printf("%d\n", num[aux]);
        aux= aux-1;
    }
    return 0;
}
