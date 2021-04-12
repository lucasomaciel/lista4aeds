/*Faça um algoritmo para repetir a leitura de um número enquanto o valor fornecido for diferente de
0. Para cada número fornecido, imprimir se ele é NEGATIVO ou POSITIVO. Quando o número 0 for
fornecido a repetição deve ser encerrada sem imprimir mensagem alguma. Use a estrutura
FAÇA/ENQUANTO.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");

  int n;

  printf("Type a number to see if it is a positive or negative number.\n");
  
  do {
    scanf("%d", &n);
    if (n > 0) {
      printf("The number is positive.\n");
    }
    else if (n < 0) {
      printf("The number is negative.\n");
    }
  } while (n != 0);

  return 0;
}