#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    ///Tendo como entrada a altura e o sexo (codificado da seguinte forma:
    /// 1:feminino 2:masculino) de uma pessoa, construa um programa que
    ///    calcule e imprima seu peso ideal, utilizando as seguintes
    ///    Fórmulas:
    ///    - para homens: (72.7 * Altura) – 58
    ///    - para mulheres: (62.1 * Altura) – 44.7

        float altura, pesoIdeal;
        char sexo;


            printf("Digite sua altura: ");
            scanf("%f", &altura);

            fflush(stdin);

            printf("Digite seu genero(M/F): ");
            scanf("%c", &sexo);



                    if (sexo == 'M' || sexo == 'm') {
                    pesoIdeal = (72.7 * altura) - 58;
                        printf("Seu peso ideal é: %0.2f\n", pesoIdeal);
                    }

                    else if (sexo == 'F' || sexo == 'f') {
                    pesoIdeal = (62.1 * altura) - 44.7;
                        printf("Seu peso ideal é: %0.2f\n", pesoIdeal);
                    }

                else {
                    printf("Digite um genero valido!\n");
                }


    return 0;

}
