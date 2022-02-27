#include <stdio.h>
#include <stdlib.h>

/*
5) Escreva um programa que receba como entrada o valor do saque realizado pelo cliente de um banco e retorne quantas notas de cada
valor serão necessárias para atender ao saque com a menor quantidade de notas possível. Serão utilizadas notas de 100, 50, 20, 10, 5, 2 e 1 real.

*/
int main()
{
        int valor = 0, n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0, n1 = 0;


                printf("Digite o valor do saque: ");
                scanf("%d", &valor);


        while (valor >0) {

                if (valor>=100) {
                    n100++;
                    valor-=100;
                }

                else if (valor>=50) {
                    n50++;
                    valor-=50;
                }

                else if (valor>=20) {
                    n20++;
                    valor-=20;
                }

                else if (valor>=10) {
                    n10++;
                    valor-=10;
                }

                else if (valor>=5) {
                    n5++;
                    valor-=5;
                }

                else if (valor>=2) {
                    n2++;
                    valor-=2;
                }

                else if (valor>=1) {
                    n1++;
                    valor-=1;
                }

        }
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
