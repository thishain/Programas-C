#include <stdio.h>
#include <stdlib.h>

int main()
{
    char frase[30];
    int vogal, tamanho =0, i=0;


    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    /*for(i=0;i<strlen(frase)-1;i++) {

        if((frase[i] == 'A') || (frase[i] == 'a') || (frase[i] == 'e') || (frase[i] == 'E') || (frase[i] == 'i') || (frase[i] == 'I') ||
           (frase[i] == 'o') || (frase[i] == 'O') || (frase[i] == 'u') || (frase[i] == 'U')) {
               vogal++;
        }

        printf("Letra: %c\n", frase[i]);

        tamanho++;
    }*/

    while(frase[i] != '\n') {

        if((frase[i] == 'A') || (frase[i] == 'a') || (frase[i] == 'e') || (frase[i] == 'E') || (frase[i] == 'i') || (frase[i] == 'I') ||
           (frase[i] == 'o') || (frase[i] == 'O') || (frase[i] == 'u') || (frase[i] == 'U')) {
               vogal++;
        }

        printf("Letra: %c\n", frase[i]);

        tamanho++;
        i++;
    }


    printf("Quantidade de letras: %d\n", tamanho);
    printf("Quantidade de vogais: %d\n", vogal);



    return 0;
}
