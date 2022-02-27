#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10], i, valor=0,pos =0, achou = 0;




        for(i=0;i<3;i++) {
                printf("Digite o valor %d: ", i);
                scanf("%d", &vetor[i]);
        }

        printf("Digite um valor: ");
        scanf("%d", &valor);

        for(i=0;i<3;i++){
            if (valor==vetor[i]){
                pos = i;
                achou = 1;
            }
        }


        if(achou == 1) {
            printf("Posicao: %d",pos);
        }
        else {
            printf("Valor nao encontrado");
        }








    return 0;
}
