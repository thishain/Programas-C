#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void recebeTempo();
int calculaTempo(int segundos, int horas, int minutos, int s);
//VARIAVEIS
int segundos, horas, minutos, resto, s;

void recebeTempo() {
     printf("Digite o tempo de duração da fábrica[em SEGUNDOS]: ");
     scanf("%d%*c", &segundos);

    calculaTempo(segundos, horas, minutos, s);
}

int calculaTempo(int segundos, int horas, int minutos, int s) {

    horas = segundos / 3600;
    resto = segundos % 3600;
    minutos = resto / 60;
    s = resto % 60;

    return printf("%d HORAS %d MINUTOS %d SEGUNDOS!", horas, minutos, s);

}


int main()
{
    setlocale(LC_ALL, "Portuguese");
    recebeTempo();

    return 0;
}
