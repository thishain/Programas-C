#include <stdio.h>
#include <stdlib.h>

int main()
{
    char frase[30];
    int palavras = 0, tamanho =0, i=0;


    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    for(i=0;i<strlen(frase)-1;i++) {

        if(frase[i] == ' ') {
            palavras++;
        }

        printf("Letra: %c\n", frase[i]);

        tamanho++;
    }


    printf("Quantidade de letras: %d\n", tamanho);
    printf("Quantidade de palavras: %d\n", palavras + 1);



    return 0;
}
