#include <stdio.h>

int main(){
    
    int m, n;

    scanf("%d", &m);
    printf("\n");
    scanf("%d", &n);

    int matriz[m][n];
    
    for (int l=0; l<m; l++){
        for (int c=0; c<n; c++){
            if(l==c){
                matriz[l][c]=(l+c)*(l+c);
            }
            else{
                matriz[l][c]=2*(l+c);
            }
        }
    }
    
    for (int l=0; l<m; l++){
        for (int c=0; c<n; c++){
            printf("%5d", matriz[l][c]);
        }
        printf("\n");
    }

    return 0;
}
