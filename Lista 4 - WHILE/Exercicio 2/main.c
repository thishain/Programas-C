#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        2) Fa�a um programa que receba um n�mero inteiro maior do que 1, e verifique se o n�mero fornecido � primo ou n�o.
    */
    int primo, numero=0, contador =1;


            printf("Digite um numero para verificar se ele � primo: ");
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
