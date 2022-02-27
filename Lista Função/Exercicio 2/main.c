#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calculaMedia (char letra, float nota1, float nota2, float nota3, float media);

float media, nota1, nota2, nota3;
char letra;


float calculaMedia (char letra, float nota1, float nota2, float nota3, float media) {

        if((letra == 'A') || (letra == 'a')) {
            media = (nota1 + nota2 + nota3) / 3;

            printf("A media aritmética é: %.2f\n", media);
        }

        else if((letra == 'P') || (letra == 'p')) {
            media = ((nota1 * 5) + (nota2 * 3) + (nota3 * 2)) / 10;

            printf("A media ponderada é: %.2f\n", media);
        }

        else if((letra == 'H') || (letra == 'h')) {
            media = 3 / (1/nota1 + 1/nota2 + 1/nota3);

            printf("A media harmonica é: %.2f\n", media);
        }

    return media;

}

int main()
{
    setlocale(LC_ALL, "Portuguese");


        printf("Digite uma das letras [A, P, H]: ");
        scanf("%c%*c", &letra);

        if(letra != 'A' && letra != 'a' && letra != 'P' && letra != 'p' && letra != 'H' && letra != 'h') {
            printf("Opção invalida.\n");
        }

        else {
                printf("Digite a 1ª nota do aluno: ");
                scanf("%f%*c", &nota1);

                printf("Digite a 2ª nota do aluno: ");
                scanf("%f%*c", &nota2);

                printf("Digite a 3ª nota do aluno: ");
                scanf("%f%*c", &nota3);

                calculaMedia(letra, nota1, nota2, nota3, media);
        }

    return 0;
}
