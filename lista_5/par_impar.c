#include <stdio.h>

int main() {
  for (int x = 1 ; x <= 50; x++){
    if (x%2==0){
      printf("Número par: %d\n", x);
    }
    else{
      printf("Número ímpar: %d\n", x);
    }
  }
  return 0;
}
  