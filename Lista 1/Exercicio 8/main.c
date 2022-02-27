#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
int main()

{

        setlocale(LC_ALL, "");
            int op = 1;


            do {

                    for (int i = 1; i <= 10; i++) {
                        Console.ForegroundColor = ConsoleColor.BLUE;
                        //system("COLOR %d", i);

                            printf("\t         X\n");
                            printf("\t        XXX\n");
                            printf("\t       OXOXO\n");
                            printf("\t      XXXOXXX\n");
                            printf("\t     OXXOXOXXO\n");
                            printf("\t    XXXOXXXOXXX\n");
                            printf("\t   OXXOXXXXXOXXO\n");
                            printf("\t        XXX\n");
                            printf("\t        XXX\n");
                            printf("\t       XXXXX\n\n");

                            system("pause");
                            system("cls");

                    }

            } while(op == 1);






    return 0;
}
