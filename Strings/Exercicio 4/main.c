#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j,c,aux;
    char frase[101];

    printf("Escreva uma frase de at� 100 caract�res: ");
    fgets(frase, sizeof(frase),stdin);
    strlwr(frase);

            for (j = 0; j < 26; j++)  {

                c = 0; aux = 0;

                while (c < strlen(frase)) {

                    if (frase [c] == (j + 'a')) {

                        aux++;
                    }

                    if ((frase[c] == '\n') && (aux >1)) {
                        printf("\t%c - %d\n", toupper(j + 'a'), aux);
                        getchar();
                    }
                    c++;
                }
            }

    return 0;
}
