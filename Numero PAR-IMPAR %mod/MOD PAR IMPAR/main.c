#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, resto;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);


        ///operador mod % -> retorna o resto da divisão inteiro
        resto = numero % 2;//////guarda o resto da divisão

            if(resto == 0) {
                printf("O numero eh par");
            }

            if(resto != 0) {
                printf("O numero eh impar");
            }
    return 0;
}
