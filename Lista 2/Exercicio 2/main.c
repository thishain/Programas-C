#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {

    ///Escreva um programa  para ler 2 valores
    ///considere que n�o ser�o informados valores iguais e escrever o maior deles

     int anoNasc, anoAtual = 2021, idade;
     setlocale(LC_ALL, "");


                printf ("Digite o seu ano de nascimento: ");
                scanf("%d" ,&anoNasc);

                idade = anoAtual - anoNasc;

                    if (idade >= 18) {
                        printf("Voc� tem %d anos e podera votar esse ano!\n", idade);
                    }

                    else {
                        printf("Voc� tem %d anos e n�o podera votar esse ano!\n", idade);
                    }

    return 0;
}
