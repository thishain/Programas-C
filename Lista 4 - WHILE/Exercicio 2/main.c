#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        2) Faça um programa que receba um número inteiro maior do que 1, e verifique se o número fornecido é primo ou não.
    */
    int primo, numero=0, contador =1;


            printf("Digite um numero para verificar se ele é primo: ");
            scanf("%d%*c", &numero);



            while(contador <= numero) {
                   if(numero % contador == 0) {
                        primo++;
                   }
                contador++;
            }

                if(primo == 2) {
                    printf("Numero e primo!");
                }

                else {
                    printf("Numero nao e primo!");
                }



    return 0;
}
