#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[40], i, valor=0, par=0;




        for(i=1;i<=3;i++) {
                printf("Digite o valor %d: ", i);
                scanf("%d", &vetor[i]);

                    if(vetor[i] % 2 == 0) {
                        par++;
                    }
        }

        printf("A quantidade de pares no vetor e de: %d", par);



    return 0;
}
