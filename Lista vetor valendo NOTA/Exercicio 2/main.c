#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i,k, vetor[7], vetpar[7];

        for(i=0;i<7;i++) {
            printf("Digite o %d º numero: ", i + 1);
            scanf("%d%*c", &vetor[i]);
        }

        printf("\n################\n");

        ///2
        printf("\nMultiplo de 2: ");
        for(i=0;i<7;i++) {
                if(vetor[i] % 2 == 0) {
                    printf("%d, ", vetor[i]);
                }

        }


        ///3
        printf("\nMultiplo de 3: ");
        for(i=0;i<7;i++) {
                if(vetor[i] % 3 == 0) {
                    printf("%d, ", vetor[i]);
                }
        }

        ///AMBOS
        printf("\nMultiplo de AMBOS: ");
        for(i=0;i<7;i++) {
                if(vetor[i] % 3 == 0 && vetor[i] % 2 == 0) {
                    printf("%d, ", vetor[i]);

                }
        }
        printf("\n");
        printf("\n################\n");






    return 0;
}
