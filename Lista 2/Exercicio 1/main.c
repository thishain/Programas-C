#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

///Escreva um programa  para ler 2 valores
///considere que n�o ser�o informados valores iguais e escrever o maior deles

{       int n1, n2;
        setlocale(LC_ALL, "");


                printf ("Digite o primeiro valor: ");
                scanf("%d",&n1);

                printf ("Digite o segundo valor: ");
                scanf ("%d",& n2);

                    if ((n1>n2)){
                        printf ("O maior valor � de N1: %d", n1);
                    }
                    if ((n2>n1)){
                        printf ("O maior valor � de N2: %d", n2);
                    }
                    if ((n1==n2)){
                        printf ("Os numeros n�o podem ser iguais!");
                }
 return 0;

}


