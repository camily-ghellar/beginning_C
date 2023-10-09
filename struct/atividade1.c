#include <stdio.h>
#include <stdlib.h>


struct Horario{
    int hora;
    int minutos;
    int segundos;
};

struct Data{
    int dia;
    int mes;
    int ano;
};

struct Compromisso{
    struct Data data;
    struct Horario horario;
    char descricao[20];
};

int main(){

    struct Compromisso compromisso = {20, 02, 2020, 02, 22, 22, "Festa de aniversario"};

    printf("\nDia: %d \nMes: %d \nAno: %d \nHora: %d \nMinutos: %d \nSegundos: %d \nDescricao: %s", compromisso.data.dia, compromisso.data.mes, compromisso.data.ano, compromisso.horario.hora, compromisso.horario.minutos, compromisso.horario.segundos, compromisso.descricao);

    compromisso.data.dia= 18;
    compromisso.data.mes= 8;
    compromisso.data.ano= 2018;
    compromisso.horario.hora= 18;
    compromisso.horario.minutos= 8;
    compromisso.horario.segundos= 18;
    strcpy(compromisso.descricao,"Cinema");

    printf("\nDia: %d \nMes: %d \nAno: %d \nHora: %d \nMinutos: %d \nSegundos: %d \nDescricao: %s", compromisso.data.dia, compromisso.data.mes, compromisso.data.ano, compromisso.horario.hora, compromisso.horario.minutos, compromisso.horario.segundos, compromisso.descricao);

    return 0;
}

/*
Escreva um trecho de codigo para fazer a criação dos novos tipos de dados conforme
solicitado abaixo:
• Horario: composto de hora, minutos e segundos.
• Data: composto de dia, mes e ano.
• Compromisso: composto de uma data, horario e texto que descreve o compromisso.
Declare uma variável deste tipo de dados inicializando seu conteúdo e, a seguir, modifique o
valor do conteúdo desta variável.
*/
