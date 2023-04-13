#include <stdio.h>

int main() {
  
  int n;

  printf("Digite o número: ");  
  scanf("%d", &n);

  printf("Os divisores do número são: ");
  for (int x = 1 ; x <= n; x++){

    if (n%x==0){
      if (n==x){
        printf("%d", x);
      } else {
        printf("%d, ", x);
      }
    }
  }
  
  return 0;
}
  