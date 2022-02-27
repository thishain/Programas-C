#include <stdio.h>

int main()
{
    int n, i, j, fat;
    float e;

        printf("Digite um numero: ");
        scanf("%d%*c", &n);

        e = 1;

            for(i=1;i<=n;i++) {
                fat = 1;

                for(j=1;j<=i;j++) {
                    fat = fat * j;
                }
                e = e + (float)1 / fat;
            }

            printf("Valor de e: %f", e);
    return 0;
}
