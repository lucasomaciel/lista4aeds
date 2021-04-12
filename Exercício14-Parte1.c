/*Ler o número de alunos existentes em uma turma, ler as notas destes alunos, e calcular a média aritmética destas notas.*/

#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <limits.h>

int main()
{
  setlocale(LC_ALL,"english");

  double students;
  double sumGrades = 0.0;

  printf("Type in how many students there are in the class: ");
  scanf("%lf", &students);

  for (int i = 1; i <= students; i++) {
    double grades;
    printf("\nType in the grade of this student: ");
    scanf("%lf", &grades);
    sumGrades += grades;
  }

  double media;

  media = sumGrades/students;

  printf("The arithmetic media of all students' grades is equal to %.2lf.", media);

  return 0;
}