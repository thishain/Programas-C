#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void recebe_valor();
void baskara(float a, float b, float c);
float imprime_valor(float x1, float x2, float delta);


//VARIAVEIS GLOBAIS
float a, b, c, delta, x1, x2;

void recebe_valor() {

        printf("Digite o valor de A: ");
        scanf("%f%*c", &a);

        printf("Digite o valor de B: ");
        scanf("%f%*c", &b);

        printf("Digite o valor de C: ");
        scanf("%f%*c", &c);

    baskara(a, b, c);
}


void baskara(float a, float b, float c) {

    delta = b*b - 4*a*c;

        if (delta==0){
            x1 = -b /(2*a);
        }

        else if (delta>0){
            x1 = (-b - sqrt(delta))/(2*a);
            x2 = (-b + sqrt(delta))/(2*a);
        }
}

float imprime_valor(float x1, float x2, float delta) {

    if (delta < 1) {
        printf("Não possui raiz real!\n");
    }

    else{
        printf("A primeira raiz é:%.2f\n",x1);
        printf("A segunda raiz é:%.2f\n",x2);
    }

    return x1, x2;

}


int main()
{
    setlocale(LC_ALL, "Portuguese");


    recebe_valor();
    baskara(a, b, c);
    imprime_valor (x1, x2, delta);

    return 0;
}

