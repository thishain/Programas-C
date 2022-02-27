#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float a=0, b=0, c=0, media;

    printf("Digite um valor inteiro e positivo: ");
    scanf("%d%*c", &i);

    printf("Digite as 3 notas: ");
    scanf("%f%*c %f%*c %f%*c", &a, &b, &c);





            if(i % 2 == 0) {
                media = (a + b + c) / 3;
                printf("A media aritimerica e: %0.1f", media);
            }
            else {
                media = ((a * 2) + (b * 3) + (c * 5)) / 10;
                printf("A media ponderada e: %0.1f", media);
            }

    return 0;
}
