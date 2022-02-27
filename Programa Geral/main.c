#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///1) Ler os 3 lados de 1 triangulo.
    ///2) verificar se forma um triangulo.
    ///         a < b+c
    ///         b < a+c
    ///         c < a+b
    ///) verificar se e triangulo equilatero, isoceles ou escaleno


        float lado1, lado2, lado3;

        printf("Digite  o primeiro lado do triangulo: ");
        scanf("%f", &lado1);

        printf("Digite  o segundo lado do triangulo: ");
        scanf("%f", &lado2);

        printf("Digite  o terceiro lado do triangulo: ");
        scanf("%f", &lado3);

                if ((lado1 < lado2 + lado3) && (lado2 < lado1 + lado3) && (lado3 < lado1 + lado2)) {
                    printf("Forma um triangulo!\n");

                            if((lado1 == lado2) && (lado1 == lado3)) {
                                    printf("Equilatero\n");
                                }
                            if((lado1 != lado2) && (lado2 != lado3) && (lado1 != lado3)) {
                                    printf("Escaleno\n");
                                }
                            if((lado1 == lado2) && (lado1 != lado3) || (lado1 == lado3) && (lado1 != lado2) || (lado2 == lado3) && (lado2 != lado1)){
                                    printf("Isoceles\n");
                                }
                }


                else {
                    printf("Não forma um triangulo!\n");
                }





    return 0;
}
