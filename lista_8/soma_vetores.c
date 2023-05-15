#include <stdio.h>

int main(){
    
    int n=10;
    int A[n], B[n], C[n];
    
    for (int x=0; x<n; x++){
        scanf("%d", &A[x]);
        scanf("%d", &B[x]);
        C[x]=A[x]+B[x];
	    
    }
    
    printf("Vetor C:");
    for (int x=0; x<n; x++){
        printf("  %d", C[x]);
    }
    
    return 0;
}
