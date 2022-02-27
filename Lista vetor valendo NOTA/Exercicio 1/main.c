#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i, vetor[6], par=0, impar=0;

        for(i=0;i<6;i++) {
            printf("Digite o %d º numero: ", i + 1);
            scanf("%d%*c", &vetor[i]);
        }



        for(i=0;i<6;i++) {
                if(vetor[i] % 2 == 0) {
                    printf("PAR: %d\n", vetor[i]);
                    par++;
                }

                else {
                    printf("IMPAR: %d\n", vetor[i]);
                    impar++;
                }
        }


          printf("QUANTIDADE DE NUMEROS PARES: %d\n", par);
          printf("QUANTIDADE DE NUMEROS IMPARES: %d\n", impar);








    return 0;
}
