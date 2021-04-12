/*Faça um algoritmo para ler uma quantidade indeterminada de valores inteiros. Para cada valor
fornecido escrever uma mensagem que indica se cada valor fornecido é PAR ou ÍMPAR. O algoritmo será
encerrado imediatamente após a leitura de um valor NULO (zero) ou NEGATIVO.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");
  int n = 1;

  printf("Type a integer number to know if it is odd or even.\n");

  while (n > 0) {
    scanf("%d", &n);
    if (n <= 0) {
      return 0;
    }
    else if (n % 2 == 0) {
      printf("The number is even.\n");
    }
    else {
      printf("The number is odd.\n");
    }
  } 

  return 0;
}