#include <stdio.h>
#include <stdlib.h>

int main()
{/*
    5) Escreva um programa que receba como entrada o valor do saque realizado pelo cliente de um banco e
    retorne quantas notas de cada valor serão necessárias para atender ao saque com a
    menor quantidade de notas possível. Serão utilizadas notas de 100, 50, 20, 10, 5, 2 e 1 real.
    */

        int n100=0, n50=0, n20=0, n10=0, n5=0, n2=0, n1=0, i, valor;

        int r100=0, r50=0, r20=0, r10=0, r5=0, r2=0, r1=0;


        printf("Digite o valor que quer sacar [VALORES INTEIROS]: ");
        scanf("%d%*c", &valor);


            for (i=0;i<valor;i++){

                    n100 = valor / 100;
                    r100 = valor % 100;

                    n50 = r100 / 50;
                    r50 = r100 % 50;

                    n20 = r50 / 20;
                    r20 = r50 % 20;

                    n10 = r20 / 10;
                    r10 = r20 % 10;

                    n5 = r10 / 5;
                    r5 = r10 % 5;

                    n2 = r5 / 2;
                    r2 = r5 % 2;

                    n1 = r2 / 1;
                    r1 = r2 % 1;
    }



                        printf("\nVALOR: %d", valor);
                        if (n100 > 0) {
                            printf("\nCedulas de R$ 100,00: %d", n100);
                        }

                        if (n50 > 0) {
                            printf("\nCedulas de R$ 50,00: %d", n50);
                        }

                        if (n20 > 0) {
                            printf("\nCedulas de R$ 20,00: %d", n20);
                        }

                        if (n10 > 0) {
                            printf("\nCedulas de R$ 10,00: %d", n10);
                        }

                        if (n5 > 0) {
                            printf("\nCedulas de R$ 5,00: %d", n5);
                        }

                        if (n2 > 0 ) {
                            printf("\nCedulas de R$ 2,00: %d", n2);
                        }

                        if (n1 > 0 ){
                            printf("\nCedulas de R$ 1,00: %d", n1);
                        }



    return 0;
}
