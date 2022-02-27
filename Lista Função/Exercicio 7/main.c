#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void recebeNumero();
int numeroPerfeito(int numero);
//VARIAVEIS
int numero, i, vP =0;
bool ver;

//FUNÇÃO PARA RECEBER OS DADOS
void recebeNumero() {

     printf("Digite um numero: ");
     scanf("%d%*c", &numero);

    numeroPerfeito(numero);
}

//FUNÇÃO QUE CALCULA OS DIAS TOTAIS DA IDADE
int numeroPerfeito(int numero) {

    for(i=1;i<numero;i++) {
        if(numero%i == 0) {
            vP = vP + i;
            printf("Divisor: %d\n", i);
                if (vP == numero) {
                    ver = true;
                }
                else {
                    ver = false;

                }
        }
    }


    return fputs(ver ? "\nTRUE\n" : "\nFALSE\n", stdout);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    //CHAMA A FUNÇÃO RECEBENUMERO
    recebeNumero();


    return 0;
}
