#include <stdio.h>
#include <stdlib.h>

int main()
{
    char frase[30];
    int consoante = 0, tamanho =0, i=0;


    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    /*for(i=0;i<strlen(frase)-1;i++) {

            switch(frase[i]) {
                //se for vogal não faz nada
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    break;
                //se for consoante adiciona 1
                default:
                    consoante++;
            }

        printf("Letra: %c\n", frase[i]);

        tamanho++;
    }*/

    while(frase[i] != '\n') {

            switch(frase[i]) {
                //se for vogal não faz nada
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    break;
                //se for consoante adiciona 1
                default:
                    consoante++;
            }

        printf("Letra: %c\n", frase[i]);
        tamanho++;
        i++;
    }


    printf("Quantidade de letras: %d\n", tamanho);
    printf("Quantidade de consoantes: %d\n", consoante);



    return 0;
}
