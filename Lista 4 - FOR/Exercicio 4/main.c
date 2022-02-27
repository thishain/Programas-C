#include <stdio.h>
#include <stdlib.h>

int main()
{/*  Um funcionário recebe aumento anual. Em 1995 foi contratado por 2000 reais.
     Em 1996 recebeu aumento de 1.5%. A partir de 1997, os aumentos sempre correspondem ao dobro do
     ano anterior.
     Faça programa que determine o salário atual do funcionário.

    */

        int i;
        float aumentoPct = 0.0075, salarioAtual = 2000, anoAtual = 2021;
        long double salarioFinal;

            for(i = 1996;i<= anoAtual;i++) {

                        aumentoPct = aumentoPct * 2;
                        salarioAtual = (salarioAtual * aumentoPct) + salarioAtual;
                        salarioFinal = salarioAtual;

                        printf("\nANO: %d", i);
                        printf("\nPORCENTAGEM: %.3f", aumentoPct);
                        printf("\nSALARIO: %.2f\n", salarioAtual);

            }

            printf("\nSalario no ano de 2021 eh: %le", salarioFinal);




    return 0;
}
