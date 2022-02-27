#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    ///s maçãs custam R$ 0,30 cada se forem compradas menos do que uma
    ///dúzia, e R$ 0,25 se forem compradas pelo menos doze. Escreva um
    ///programa que leia o número de maçãs compradas, calcule e escreva o
    ///valor total da compra.

    float qtdeMaca, valorTotal;
    setlocale(LC_ALL, "");


        printf("Digite a quantidade de maças compradas: ");
        scanf("%f", &qtdeMaca);



            if (qtdeMaca < 12) {

                valorTotal = qtdeMaca * 0.30;
                printf("Você comprou %0.1f maças e o valor total foi de: %0.2f\n",qtdeMaca, valorTotal);

            }

            else {

                valorTotal = qtdeMaca * 0.25;
                printf("Você comprou %0.1f maças e o valor total foi de: %0.2f\n",qtdeMaca, valorTotal);

            }


    return 0;
}
