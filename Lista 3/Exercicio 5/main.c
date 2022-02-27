#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, comprimento, largura, litros_Dia, volume_Total, dias_Autonomia;

        printf("Digite a LARGURA(CM) do reservatorio: ");
        scanf("%f%*c", &largura);

        printf("Digite o COMPRIMENTO(CM) do reservatorio: ");
        scanf("%f%*c", &comprimento);

        printf("Digite a ALTURA(CM) do reservatorio: ");
        scanf("%f%*c", &altura);

        printf("Digite o consumo medio dos moradores (LITROS/DIA): ");
        scanf("%f%*c", &litros_Dia);

        system("cls");


        volume_Total = (largura * comprimento * altura) / 1000;

        dias_Autonomia = volume_Total / litros_Dia;

            round(dias_Autonomia);

            printf("A capacidade do reservatorios em LITROS eh: %0.1f\n", volume_Total);

            printf("A autonomia do reservatorio em dias e de: %0.0f\n", dias_Autonomia);



                if(dias_Autonomia < 2) {
                    printf("Consumo elevado!\n");
                }
                else if (dias_Autonomia >= 2 && dias_Autonomia <= 7) {
                    printf("Consumo moderado!\n");
                }
                else {
                    printf("Consumo reduzido!\n");
                }



    return 0;
}
