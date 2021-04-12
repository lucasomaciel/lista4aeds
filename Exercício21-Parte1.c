/*Faça um algoritmo para repetir a leitura de uma senha até que ela seja válida. Para cada leitura da
senha incorreta informada escrever a mensagem "SENHA INVÂLIDA". Quando a senha for informada
corretamente deve ser impressa a mensagem "ACESSO PERMITIDO" e o algoritmo deve ser encerrado.
Considere que a senha correta é o valor 1234.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");

  int password;

  printf("Type in the password.\n");
  scanf("%d", &password);
  
  while (password != 1234) {
    printf("Error: invalid password. Try again.\n");
    scanf("%d", &password);
  }

  if (password == 1234) {
    printf("Acess granted. Welcome.");
  }
  
  return 0;
}