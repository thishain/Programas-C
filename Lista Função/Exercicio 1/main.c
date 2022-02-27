#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

//DECLARAÇÃO DE VARIAVEIS
float raio, volume, pi = 3.14;

//CARREGANDO A FUNÇÃO
void volumeCirculo(float raio);

//ESCREVENDO A FUNÇÃO
void volumeCirculo (float raio) {

      volume = 4 * pi * pow(raio, 3) / 3;
      printf("O volume da esfera é: %.2f", volume);

}

//FUNÇÃO PRINCIPAL
int main()
{
    setlocale(LC_ALL, "Portuguese");

        printf("Digite o raio da esfera: ");
        scanf("%f%*c", &raio);
        //CHAMANDO A FUNÇÃO PASSANDO O PARAMETRO (RAIO)
        volumeCirculo(raio);
}
