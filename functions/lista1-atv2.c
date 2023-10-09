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

/*Um professor fez 3 provas durante um semestre mas s� vai levar em conta a maior das
m�dias, ou a m�dia calculada com duas notas ou a m�dia calculada com tr�s notas, aquela
que for maior.
Voc� deve criar uma fun��o chamada Media(), que receba o valor das 3 notas, e calcule a
m�dia simples das notas que forem informadas com valores positivos (ignore o par�metro
que tiver uma nota negativa), e retorne essa m�dia calculada.
Quando quiser calcular a m�dia com apenas 2 notas, voc� deve informar um n�mero
negativo no terceiro par�metro ( assim ele ser� ignorado e a m�dia ser� calculada apenas
com 2 notas).
No programa principal, (main) voc� dever� informar ao usu�rio para ele informar uma nota de
cada vez. A seguir, calcular e mostrar na tela:
> Como seria a m�dia com essas 3 notas.
> A m�dia com as 2 notas mais altas dessas 3 notas que foram informadas.
Para descobrir qual a nota mais alta, utilize a fun��o Maior() que foi utilizada no exerc�cio 1,
acima. */
