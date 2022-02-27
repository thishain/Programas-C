
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, i, primo=0;


        printf("Digite um número(MAIOR QUE 1): ");
        scanf("%d%*c", &numero);

            for(i=1;i<=numero;i++) {
                if(numero % i == 0) {
                    primo++;
                }
                printf("valor que divide: %d\n", i);
                printf("numero: %d\n", numero);
                printf("primo: %d\n", primo);

            }

                if(primo == 2) {
                    printf("O numero e primo!");
                }
                else {
                    printf("O numero nao eh primo!");
                }



    return 0;
}
