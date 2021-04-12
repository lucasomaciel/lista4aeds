/*Faça um algoritmo que receba um inteiro positivo e retorne sua representação no formato binário.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
    setlocale(LC_ALL,"english");

    int i;
    int j;
    int num;
    int flag = 0;
    
    printf("Type in a positive whole number.\n");
    scanf("%d", &num);
    
    if (num <= 0) {
        printf("Error: the program only accepts positive numbers.\n");
        return 0;
    }
    
    printf("Represented in binary format, %d is equal to ", num);
    for (i = 31; i >= 0; i--) {
        j = num >> i;
        
        if (j & 1) {
            printf("1");
            flag = 1;
        }
        else if (flag) {
            printf("0");
        }
        
    }
    printf(".");
    
    return 0;
}
