#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fim, i, j, x, expoente, num_termos;
    int den, denominador, fat, s;

        printf("Digite o numero de termos: ");
        scanf("%d%*c", &num_termos);

        printf("Digite o numero de X: ");
        scanf("%d%*c", &x);

        s = 0;

        denominador = 1;

            for(i=1;i<=num_termos;i++) {
                fim = denominador;
                fat = 1;
                    for(j=1;j<=fim;j++) {
                        fat = fat * j;
                    }
            }
            expoente = i + 1;

            if(expoente % 2 == 0) {
                //s = s - x (expoente / fat);
            }
            else {
                //s = s + x (expoente / fat);
            }

            if(denominador == 4) {
                den = -1;
            }

            if(denominador == 1) {
                den = 1;
            }

            if(den == 1){
                denominador = denominador +1;
            }

            else {
                denominador = denominador -1;
            }

            printf("Valor: %d", s);


    return 0;
}
