#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

//DECLARA��O DE VARIAVEIS
float raio, volume, pi = 3.14;

//CARREGANDO A FUN��O
void volumeCirculo(float raio);

//ESCREVENDO A FUN��O
void volumeCirculo (float raio) {

      volume = 4 * pi * pow(raio, 3) / 3;
      printf("O volume da esfera �: %.2f", volume);

}

//FUN��O PRINCIPAL
int main()
{
    setlocale(LC_ALL, "Portuguese");

        printf("Digite o raio da esfera: ");
        scanf("%f%*c", &raio);
        //CHAMANDO A FUN��O PASSANDO O PARAMETRO (RAIO)
        volumeCirculo(raio);
}
