#include <stdio.h>

int main()
{
    int a[10];
    int i;


        for (i=0;i<10;i++){
            printf("Valores: ");
            scanf("%d%*c",&a[i]);
        }

        for (i=1;i<10;i++){
            a[i]= a[i-1]+ a[i];

        }

        for (i=0;i<10;i++){
            printf("\n%d",a[i]);
        }

return 0;

}
