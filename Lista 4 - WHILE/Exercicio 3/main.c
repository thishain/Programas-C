#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
            Chico tem 1.50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1.10 metros e cresce 3 centímetros por ano.
             Escreva um programa que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico.
    */


        float alturaChico = 1.50, alturaZe = 1.10;
        int anos = 0;


            while(alturaZe <= alturaChico) {

                    alturaChico += 0.02;

                    alturaZe += 0.03;

                    printf("\n\nALTURA ZE: %.2f", alturaZe);
                    printf("\nALTURA CHICO: %.2f", alturaChico);

                anos++;

            }

            printf("\nAnos: %d", anos);

    return 0;
}
