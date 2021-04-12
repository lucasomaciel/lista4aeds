/*Calcule a média e o desvio padrão de uma sequência de números como no exercício anterior, mas agora
considere que a quantidade de números n não é fornecida pelo usuário. O programa irá terminar quando o usuário digitar o número 0 (zero).*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");

  int number = 1;
  double sum = 0.0;
  double sum1 = 0.0;
  double quantNumbers = 0.0;
    


  printf("Type in as many numbers as you wish.\nIf you type 0, the program will terminate itself.\n");
  while (number != 0) {
    scanf("%d", &number);
    if (number != 0) {
        sum += number;
        sum1 += number * number;
        quantNumbers++;
    }
  }

  
  double media = sum/quantNumbers;
  double stantardDeviation = sqrt((sum1 - (2 * media * sum) + (quantNumbers * media * media))/quantNumbers);
  
  printf("%lf %lf", media, stantardDeviation);

  return 0;
}