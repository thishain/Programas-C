#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10], i, x, valor=0;




        for(i=1;i<=3;i++) {
                printf("Digite o valor %d: ", i);
                scanf("%d", &vetor[i]);
        }

        printf("\n####################\n\n");

        for(x=1;x<i;x++) {

                if(vetor[x] < 0) {
                    vetor[x] = 0;
                }

                printf("%d\n", vetor[x]);
        }







    return 0;
}
