/*Ler 10 valores e contar quantos estão no intervalo [10,20] e quantos deles estão fora deste intervalo.
Escrever o resultado das duas contagens.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");

  int n;
  int quantIn = 0;
  int quantOut = 0;

  printf("Type 10 numbers: ");
  for (int i = 0; i < 10; i++) {
    scanf("%d\n", &n);
    if ((n >= 10) && (n <= 20)) {
      quantIn++;
    }
    else {
      quantOut++;
    }
    n = 0;
  }

  printf("Out of the typed numbers, %d are in the [10,20] interval and %d are not.", quantIn, quantOut);

    return 0;
}