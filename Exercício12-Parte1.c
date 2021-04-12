/*Ler 10 valores e escrever quantos destes valores são negativos.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");

  int n;
  int quant = 0;

  printf("Type 10 numbers: ");
  for (int i = 0; i < 10; i++) {
    scanf("%d\n", &n);
    if (n < 0) {
      quant++;
    }
    n = 0;
  }

  printf("Out of the typed numbers, %d are negatives.", quant);

    return 0;
}