#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, vetor[16], aux;


        for(x=0;x<16;x++) {
            printf("\nValores:");
            scanf("%d%*c", &vetor[x]);
        }

        for(x=0;x<8;x++) {
            aux = vetor[x];
            vetor[x] = vetor[x+8];
            vetor[x+8] = aux;
        }

        for(x=0;x<16;x++) {
            printf("Valores: %d\n", vetor[x]);
        }



    return 0;
}
