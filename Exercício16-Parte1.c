/*Escreva outra versão do algoritmo para resolver o problema anterior utilizando a estrutura com teste
de saída no início da repetição (ENQUANTO).*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");

  int n = 1;

  printf("Type a number to see if it is a positive or negative number.\n");
  
  while (n != 0) {
    scanf("%d", &n);
    if (n > 0) {
      printf("The number is positive.\n");
    }
    else if (n < 0) {
      printf("The number is negative.\n");
    }
  }

  return 0;
}