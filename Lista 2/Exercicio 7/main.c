#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

        int lados, medida;
        float area;

        printf("Digite a quantidade de lados do POLIGIONO(3, 4 , 5): ");
        scanf("%d", &lados);

        printf("Digite a medida dos lados do POLIGONO(CM): ");
        scanf("%d", &medida);


            if(lados == 3) {
                area = (medida * medida) / 2;
                printf("TRIÂNGULO de area: %f", area);
            }

            if(lados == 4) {
                area = medida * medida;
                printf("QUADRADO de area: %f", area);
            }

            if(lados == 5) {
                printf("PENTÁGONO\n");
            }


        return 0;
}
