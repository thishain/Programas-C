#include <stdio.h>



int main()
{
    int vetA[6], vetB[6];
    int vetC[12];
    int x, j=0, k=0;


        for (x=0;x<6;x++){
            printf("\nDigite os valores para A e B");
            scanf("%d%*c%d%*c",&vetA[x],&vetB[x]);
        }


        for(x=0;x<12;x++){
            if (x%2==0){
                vetC[x] = vetA[j];
                j++;
        }
            else{
                vetC[x] = vetB[k];
                k++;
            }
        }

        for(x=0;x<12;x++){
        printf("\n%d",vetC[x]);
        }


return 0;
}
