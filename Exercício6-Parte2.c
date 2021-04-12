/*Sejam P(x1,y1) e Q(x2,y2) dois pontos quaisquer no plano. A sua distância é dada por:
d = ((x2 - x1)^2 + (y2 - y1)^2)^1/2
Faça um algoritmo que leia várias linhas com quatro valores separados por vírgula, correspondentes às
coordenadas dos pontos P e Q e retorne a distância destes pares de pontos. A leitura dos dados será
interrompida quando as quatro coordenadas forem iguais a zero.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");

  int x1, x2, y1, y2 = 1;
  double x = (double)x2 - (double)x1;
  double y = (double)y2 - (double)y1;

  while ((x1 != 0) || (x2 != 0) || (y1 != 0) || (y2 != 0)) {
    printf("Type in the coordinates of two points. Type in all values equal to 0 to terminate the program.\n");
    printf("Coordinates of P: ");
    scanf("%d, %d", &x1, &y1);
    printf("Coordinates of Q: ");
    scanf("%d, %d", &x2, &y2);
    double distance;
    distance = sqrt(pow(x, 2) + pow(y, 2));
    printf("The distance between points is equal to %.2lf.\n", distance);
  }

  return 0;
}