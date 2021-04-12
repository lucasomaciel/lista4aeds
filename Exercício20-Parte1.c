/*Faça um algoritmo para ler dois valores inteiros e imprimir o resultado da divisão do primeiro pelo
segundo. Se o segundo valor informado for ZERO, deve ser impressa uma mensagem de VALOR INVÁLIDO
e deverá ser lido um novo valor. Ao final do programa deve ser impressa a seguinte mensagem: VOCE
DESEJA OUTRO CÁLCULO (S/N)?. Se a resposta for S o programa deverá retornar ao começo, caso
contrário deverá encerrar a sua execução imprimindo quantos cálculos foram feitos.
OBS: O programa só deverá aceitar com a resposta para a pergunta as letras S ou N.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");

  char choice = 'S';
  int dividend;
  int divisor;
  double quocient;

  printf("Division Program\n");
  while (choice == 'S') {
    printf("Type in the dividend and the divisor.\n");
    scanf("%d %d", &dividend, &divisor);
    while (divisor == 0) {
      printf("ERROR: Invalid Value. Divisor has to be different than 0. Type it in again.\n");
      scanf("%d", &divisor);
    }
    quocient = (double)dividend/(double)divisor;
    printf("The quocient of this division is equal to %.2lf.\n", quocient);
    printf("Type S if you want to make another operation, and N if you don't.\n");
    scanf(" %c", &choice);
  }

  return 0;
}