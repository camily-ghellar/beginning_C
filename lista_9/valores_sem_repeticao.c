#include <stdio.h>

int main() {
    
    int n,  cont = 0;

    scanf("%d", &n);

    int numeros[n];
    int n_semRepeticao[n];

    for (int x = 0; x < n; x++) {
        scanf("%d", &numeros[x]);

        int repetidos = 0;
        for (int i = 0; i < x; i++) {
            if (numeros[i] == numeros[x]) {
                repetidos = 1;
                break;
            }
        }

        if (!repetidos) {
            n_semRepeticao[cont] = numeros[x];
            cont++;
        }
    }

    printf("Números lidos sem repetição:\n");
    for (int x = 0; x < cont; x++) {
        printf("%d\n", n_semRepeticao[x]);
    }

    return 0;
}
