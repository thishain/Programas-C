#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, y=1, vetor[10];


        for(i=1;i<10;i++) {
            vetor[i] = y;
            y = y + 2;
            printf("IMPAR:%d\n", vetor[i]);

        }



    return 0;
}
