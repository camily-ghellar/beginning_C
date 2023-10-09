#include <stdio.h>
#include <stdlib.h>

struct Funcionario{
    char nome[20];
    int idade;
    char sexo[1];
    int cpf;
    int data_nasci;
    int cod_setor;
    char cargo[30];
    float salario;

};

void ImprimeFuncionario(struct Funcionario funcionario){
    printf("\n Nome: %s \n Idade: %d \n Sexo: %s \n CPF: %d \n Data de nascimento: %d \n Codigo do setor: %d \n Cargo: %s \n Salario: %f", funcionario.nome, funcionario.idade, funcionario.sexo, funcionario.cpf, funcionario.data_nasci, funcionario.cod_setor, funcionario.cargo, funcionario.salario);
}

int main(){
    struct Funcionario funcionario;

    printf("Digite o nome do funcionario: ");
    scanf("%s", funcionario.nome);

    printf("Digite a idade do funcionario: ");
    scanf("%d", &funcionario.idade);

    printf("Digite o sexo do funcionario: ");
    scanf("%s", funcionario.sexo);

    printf("Digite o CPF do funcionario: ");
    scanf("%d", &funcionario.cpf);

    printf("Digite a data de nascimento do funcionario: ");
    scanf("%d", &funcionario.data_nasci);

    printf("Digite o codigo do setor do funcionario: ");
    scanf("%d", &funcionario.cod_setor);

    printf("Digite o cargo do funcionario: ");
    scanf("%s", funcionario.cargo);

    printf("Digite o salario do funcionario: ");
    scanf("%f", &funcionario.salario);

    ImprimeFuncionario(funcionario);

}
