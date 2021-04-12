/*Um posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus
clientes. Faça um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma:
1.Álcool 2.Gasolina 3.Diesel 4.Fim). Caso o usuário informe um código inválido (fora da faixa de 1 a 4) deve
ser solicitado um novo código (até que seja válido). Ao ser informado o código do combustível, o seu
respectivo nome deve ser impresso na tela. O programa será encerrado quando o código informado for o
número 4 escrevendo então a mensagem : "MUITO OBRIGADO" e a quantidade de clientes que
abasteceram cada tipo de combustível.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");

  int code;
  int quantEthanol = 0;
  int quantGasoline = 0;
  int quantDiesel = 0;

  printf("What fuel was used? Type in a number correspondent to the ones listed below.\n1) Ethanol\n2) Gasoline\n3) Diesel\nNumber 4 is used to finish the program.\nFor each time you press a fuel code, press enter.\n");

  while (code != 4) {
    scanf("%d", &code);
    while ((code != 1) && (code != 2) && (code != 3) && (code != 4)) {
      printf("Type in a number out of the possible ones.\n");
      scanf("%d", &code);
    }
    if (code == 1) {
      quantEthanol++;
    }
    else if (code == 2) {
      quantGasoline++;
    }
    else if (code == 3) {
      quantDiesel++;
    }
  }

  printf("Thank you!\n");

  printf("The number of people that used Ethanol, Gasoline and Diesel, correspondly, is %d, %d and %d.", quantEthanol, quantGasoline, quantDiesel);

  return 0;
}