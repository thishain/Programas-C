#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int a1, a2, a3, soma;
    setlocale(LC_ALL, "");

        printf("Digite o primeiro �ngulo do triangulo: ");
        scanf("%d", &a1);

        printf("Digite o segundo �ngulo do triangulo: ");
        scanf("%d", &a2);

        printf("Digite o terceiro �ngulo do triangulo: ");
        scanf("%d", &a3);

		soma = a1 + a2 + a3;

		if ((soma == 180) && (a1>0) && (a2>0) &&(a3>0)) {///� triangulo
			if ((a1 == 90) || (a2 == 90) || (a3 ==90)){
				printf("Triangulo retangulo");
			}
				if (((a1>90) && (a2<90) && (a3<90)) || ((a2>90) && (a1<90) && (a3<90)) || ((a3>90) && (a2<90) && (a1<90))){
				printf("Triangulo Obtusangulo");
			}
				if ((a1 < 90) && (a2 < 90) && (a3 < 90)){
				printf("Triangulo acutangulo");
			}
		}
		   else{
			printf("n�o sao angulos validos para um triangulo");
			}

    return 0;
}
