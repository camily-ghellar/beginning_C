#include <stdio.h>
#include <ctype.h>

int main() {
    int idade;
    int no_errors = 1; // 0- no errors, 1- an error occurred
    float salario;
    char sexo, est_civil;

    while (no_errors) {
        printf("Digite sua idade: ");
    	scanf("%d", &idade);

        if (idade <= 0 || idade >= 150) {
            printf("Informação incorreta, digite novamente!\n");
            continue;
        }

        printf("Digite seu salário: ");
        scanf("%f", &salario);

        if (salario <= 0) {
            printf("Informação incorreta, digite novamente!\n");
            continue;
        }

        printf("Digite seu sexo: ");
        scanf(" %c", &sexo);

        if (toupper(sexo) == 'F' || toupper(sexo) == 'M') {
			printf("Digite seu estado civil: ");
			scanf(" %c", &est_civil);

			if (toupper(est_civil) == 'S' || toupper(est_civil) == 'C' || toupper(est_civil) == 'V' || toupper(est_civil) == 'D') {
				printf("Informações corretas\n");
				no_errors = 0;
			} else {
				printf("Informação incorreta, digite novamente!\n");
				continue;
			}
        } else {
			printf("Informação incorreta, digite novamente!\n");
            continue;
		}
    }
    return 0;
}