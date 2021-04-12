/*Deseja-se fazer um levantamento a respeito da ausência de alunos à primeira prova de Fundamentos
de Computação para cada uma das 14 turmas existentes. Para cada turma, é fornecido um conjunto de
valores, sendo que os dois primeiros valores do conjunto correspondem à identificação da turma (A, ou
B, ou C, ...) e ao número de alunos matriculados, e os demais valores deste conjunto contêm o número de
matrícula do aluno e a letra A ou P para o caso de o aluno estar ausente ou presente, respectivamente.
Faça um algoritmo que, para cada turma, calcule a porcentagem de ausência e escreva a identificação da
turma e a porcentagem calculada; determine e escreva quantas turmas tiveram porcentagem de ausência
superior a 5%.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");

  char classLetter;
  int quantStudents;
  char presence;
  int quantAbsents = 0;
  double percentAbsents;
  int quantFivePlusAbsents = 0;

  for (int i = 0; i < 14; i++) {
    printf("Type in the letter corresponding to the class, and how many students there are in the class.\n");
    scanf(" %c %d", &classLetter, &quantStudents);
    printf("Type now for each student: A if they were absent and P if they were present.\n");
    for (int j = 0; j < quantStudents; j++) {
      scanf(" %c", &presence);
      while(presence != 65 && presence != 80) {
        printf("ERROR: Invalid value. Type either A or P: ");
        scanf(" %c", &presence);
      }
      if (presence == 'A') {
        quantAbsents++;
      }
    }
    percentAbsents = 100*((double)quantAbsents/(double)quantStudents);
    printf("The percentage of absents in the %c class is equal to %.2lf%%.\n", classLetter, percentAbsents);
    if (percentAbsents > 5) {
        quantFivePlusAbsents++;
    }
    quantAbsents = 0;
  }

  printf("Out of all classes, %d had more than 5 percent of absence.\n", quantFivePlusAbsents);

  return 0;
}