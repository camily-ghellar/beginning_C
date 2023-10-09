#include <stdio.h>
#include <stdlib.h>

float Maior(float media1, float media2){

    float maior = media1;
    if(maior<media2){
        maior = media2;
    }
    return maior;
}

float Media(float n1, float n2, float n3){
    float media2notas_1, media2notas_2, media2notas_3, media3notas;
    media3notas = (n1+n2+n3)/3;
    float maiorMedia2notas;

    media2notas_1 = (n1+n2)/2;
    media2notas_2 = (n1+n3)/2;
    media2notas_3 = (n2+n3)/2;

    maiorMedia2notas = media2notas_1;

    if(maiorMedia2notas < media2notas_2 && media2notas_2 > media2notas_3){
        maiorMedia2notas = media2notas_2;
    }
    else if(maiorMedia2notas < media2notas_3 && media2notas_3 > media2notas_2){
        maiorMedia2notas = media2notas_3;
    }

    float resultado = Maior(maiorMedia2notas, media3notas);

    return resultado;
}

int main(){

    float n1, n2, n3;

    printf("Primeira nota: ");
    scanf("%f", &n1);

    printf("Segunda nota: ");
    scanf("%f", &n2);

    printf("Terceira nota: ");
    scanf("%f", &n3);

    float resultado_final = Media(n1, n2, n3);

    printf("A maior media e: %.2f", resultado_final);

    return 0;
}

/*Um professor fez 3 provas durante um semestre mas só vai levar em conta a maior das
médias, ou a média calculada com duas notas ou a média calculada com três notas, aquela
que for maior.
Você deve criar uma função chamada Media(), que receba o valor das 3 notas, e calcule a
média simples das notas que forem informadas com valores positivos (ignore o parâmetro
que tiver uma nota negativa), e retorne essa média calculada.
Quando quiser calcular a média com apenas 2 notas, você deve informar um número
negativo no terceiro parâmetro ( assim ele será ignorado e a média será calculada apenas
com 2 notas).
No programa principal, (main) você deverá informar ao usuário para ele informar uma nota de
cada vez. A seguir, calcular e mostrar na tela:
> Como seria a média com essas 3 notas.
> A média com as 2 notas mais altas dessas 3 notas que foram informadas.
Para descobrir qual a nota mais alta, utilize a função Maior() que foi utilizada no exercício 1,
acima. */
