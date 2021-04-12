/*Faça um algoritmo que receba diversos pares de números A e B entrados pelo usuário, e determine a
soma dos cubos de todos os números pares inteiros compreendidos no intervalo entre B e A. Retorne o
intervalo pesquisado e o valor da soma calculada. a entrada de dados deverá ser interrompida quando A
e B forem iguais a zero.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");

  int A;
  int B;
  double sum = 0.0;

  while ((A != 0) || (B != 0)) {
    printf("Type in two whole positive numbers. Type 0 for both values to terminate the program.\n");
    scanf("%d %d", &A, &B);

    if (B > A) {
      int temp = B;
      B = A;
      A = temp;
    }

    for (int i = B; i < A; i++) {
      if (i % 2 == 0) {
        sum += pow((double)i, 3);
      }
    }
    printf("The sum of the cubic values of all even numbers between %d and %d is equal to %.2lf.\n", A, B, sum);
  }

  return 0;
}