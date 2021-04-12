/*Faça um algoritmo que receba uma sequência de
números e retorne o maior e o menor número da sequência. A quantidade de números n é fornecida pelo
usuário.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");

  int quantNumbers;
  int biggestValue = INT_MIN;
  int smallestValue = INT_MAX;

  printf("How many numbers do you want to type in?\n");
  scanf("%d", &quantNumbers);

  printf("Now, type in the numbers. For each time you type a number, press enter.\n");
  for (int i = 0; i < quantNumbers; i++) {
    int number;
    scanf("%d", &number);
    if (number > biggestValue) {
      biggestValue = number;
    }
    if (number < smallestValue) {
      smallestValue = number;
    }
  }

  printf("Out of the typed numbers, %d has the smallest value and %d the biggest.\n", smallestValue, biggestValue);

  return 0;
}