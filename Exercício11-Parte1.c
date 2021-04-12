/* Faça um algoritmo para ler um valor X (validar para aceitar apenas valores entre 1 [inclusive] e 10
[inclusive]). Escrever a tabuada de X.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");

  int n;

  printf("Type a integer between 1 and 10: ");
  scanf("%d", &n);
  if ((n < 1) || (n > 10)) {
    printf("The number has to be between 1 and 10.");
    return 0;
  }


  for (int i = 0; i <= 10; i++) {
    int mult;
    mult = i * n;
    printf("%d x %d = %d\n", i, n, mult);
  }

    return 0;
}