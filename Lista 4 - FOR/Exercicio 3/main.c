#include <stdio.h>
#include <stdlib.h>

int main()
{
    float i,k;
    float alturaChico = 1.5, alturaZe = 1.1, anos;



        for(alturaZe;alturaZe <alturaChico;alturaZe = alturaZe + 0.03) {
                    alturaChico = alturaChico + 0.02;
                    anos++;

                    printf("\nZE: %.2f", alturaZe);
                    printf("\nCHICO: %.2f", alturaChico);


        }

                printf("\nPrecisa de %.2f anos para o Ze ser maior que o chico!", anos);



    return 0;
}
