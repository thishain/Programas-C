#include <stdio.h>
#include <math.h>


int main()
{
    float fim, i, j, x, num_termos,den, denominador, fat, s;
    int expoente;


        printf("Digite o numero de termos:");
        scanf("%f%*c",&num_termos); //3
        printf("Digite o valor de X:");
        scanf("%f%*c",&x);//1
        s = 0 ;
        denominador = 1;


        for (i=1;i<=num_termos;i++){ //i=3 to 3
        fim = denominador; //3
        fat = 1;
            for (j=1;j<=fim;j++){ //j=1 to 3
            fat = fat * j;
            }
        //fat = 6
        expoente = i + 1; //4


            if (expoente%2==0){ //resto 0
            s = s - pow(x,expoente)/fat; //0.66
            }
            else{
            s = s + pow(x,expoente)/fat;//
            }
            if(denominador==4){
            den = -1;
            }
            if (denominador==1){
            den = 1; //fez aqui
            }
            if (den == 1){
            denominador = denominador + 1; //denominador 4
            }
            else{
            denominador = denominador - 1;
            }
        }

                printf("Valor da soma: %f",s);
        return 0;
    }

