#include <stdio.h>
#include <stdlib.h>

testeValor(int valor);

int valor, qtd=0, primo=0, i;

int testeValor(int valor){
    int retorno;

    if(valor % 2 == 0 || valor/valor == 0) {//PAR
        retorno = 0;
    }

    else {//IMPAR
        for (i=1;i<=valor;i++){
            if (valor%i==0){
                qtd= qtd+1;
            }
        }
            if (qtd>2){
                primo=1;
            }
            else {
              primo=0;
            }
        if(primo == 1) {
            retorno = 0;
        }
        else {
            retorno = 1;
        }

    }

    return printf("%d\n", retorno);
}

int main()
{
    printf("Digite um valor: ");
    scanf("%d%*c", &valor);

    testeValor(valor);

    return 0;
}
