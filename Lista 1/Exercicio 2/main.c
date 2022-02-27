#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


//Elaborar um programa que pede seu nome, endereço, CEP e telefone. Ele deve imprimir seu nome completo na primeira linha, seu endereço na segunda, e o CEP e telefone na terceira.


int main()
{

            setlocale(LC_ALL,"");
            char
                nome[50],
                endereco[50],
                cep[20],
                telefone[12];

                system("color 2");

                //Entrada de Dados
                    printf("Bem Vindo\n");
                    printf("==========\n");
                    printf("Digite seu NOME: ");
                    fgets(nome, 50, stdin);
                    printf("=========================\n");

                    printf("Digite seu ENDEREÇO: ");
                    fgets(endereco, 50, stdin);
                    printf("=========================\n");

                    printf("Digite seu CEP: ");
                    fgets(cep, 20, stdin);
                    printf("=========================\n");

                    printf("Digite seu TELEFONE: ");
                    fgets(telefone, 12, stdin);
                    printf("=========================\n\n");
                system("cls");

                //Saida de dados

                    printf("Seu NOME é: %s\n", nome);

                    printf("Seu ENDEREÇO é: %s\n", endereco);

                    for(int i=0;telefone[i]!='\0';i++)
                         {
                         if(telefone[i]=='\n')
                             {
                              telefone[i]=' ';
                             }
                          }

                    printf("Seu TELEFONE : %se seu CEP é: %s\n", telefone, cep);
                    printf("=========================\n");


    return 0;
}
