#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {

    ///Escreva um programa  para ler 2 valores
    ///considere que não serão informados valores iguais e escrever o maior deles

     int anoNasc, anoAtual = 2021, idade;
     setlocale(LC_ALL, "");


                printf ("Digite o seu ano de nascimento: ");
                scanf("%d" ,&anoNasc);

                idade = anoAtual - anoNasc;

                    if (idade >= 18) {
                        printf("Você tem %d anos e podera votar esse ano!\n", idade);
                    }

                    else {
                        printf("Você tem %d anos e não podera votar esse ano!\n", idade);
                    }

    return 0;
}
