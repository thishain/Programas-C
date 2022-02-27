#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x=0,y=0, numero=0, numeros[12], n1=0, n2=0;
    double valorfinal=0;

        printf("Digite a quantidade de numeros: ");
        scanf("%d", &numero);

        printf("Digite o valor da pocisao: ");
        scanf("%d", &x);

        printf("Digite o valor da pocisao: ");
        scanf("%d", &y);


        for(i=1;i<=numero;i++) {
            printf("Digite o %d valor: ", i);
            scanf("%d", &numeros[i]);

            n1 = numeros[x];

            n2 = numeros[y];

        }

        valorfinal = n1 + n2;

        printf("A soma dos valores %d e %d eh: %0.2f", n1, n2, valorfinal);




    return 0;
}
