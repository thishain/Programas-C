#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Um funcion�rio recebe aumento anual. Em 1995 foi contratado por 2000 reais. Em 1996 recebeu aumento de 1.5%.
        A partir de 1997, os aumentos sempre correspondem ao dobro do ano anterior. Fa�a programa que determine o sal�rio atual do funcion�rio.
    */



        int ano = 1996, anoAtual = 2021;
        float pct = 0.0075, salario = 2000, salarioFinal = 0;


        do {
            pct = pct * 2;
            salario = (salario * pct) + salario;

            printf("\nANO: %d", ano);
            printf("\nPORCENTAGEM: %.3f", pct);
            printf("\nSalario: %.2f", salario);
            ano++;

        }while(ano <= anoAtual);

            printf("\nO salario final do funcionario e: %f", salario);



    return 0;
}
