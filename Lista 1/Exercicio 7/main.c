#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//8. Menu - Elabore um programa que mostre o seguinte menu na tela:

//Cadastro de Alunos

//1 - Inclui

//2 - Altera

//3 - Exclui

//4 – Consulta

//5 - Fim

//Opção:


int main()
{
        int opcao;
        setlocale(LC_ALL, "");

        printf("Cadastro de alunos\n\n");
        printf("1 - Inclui\n");
        printf("2 - Altera\n");
        printf("3 - Exclui\n");
        printf("4 - Consulta\n");
        printf("5 - Fim\n\n");
        printf("OPÇÃO: ");
        scanf("%i", &opcao);


    return 0;
}
