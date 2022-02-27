#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void recebeNumero(int numero);
//VARIAVEIS GLOBAIS
int numero;
bool ver;

//FUNÇÃO PARA RECEBER OS DADOS
void recebeNumero(int numero) {

        if(numero % 2 == 0) {
            ver = true;
        }

        else {
            ver = false;
        }


    return fputs(ver ? "TRUE\n" : "FALSE\n", stdout);
}

//FUNÇÃO PRINCIPAL
int main()
{
    setlocale(LC_ALL, "Portuguese");

        printf("Digite um numero inteiro: ");
        scanf("%d%*c", &numero);

        //CHAMA A FUNÇÃO recebeNumero
        recebeNumero(numero);

    return 0;
}
