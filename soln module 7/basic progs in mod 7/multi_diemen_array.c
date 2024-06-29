#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int n_subs = 3;
  int n_stus = 5;
  int marks[n_stus][n_subs];

  // Collect marks for all students and subjects
  for (int i = 0; i < n_stus; i++) {
    for (int j = 0; j < n_subs; j++) {
      printf("Enter the marks of student %d in subject %d: ", i + 1, j + 1);
      scanf("%d", &marks[i][j]);
    }
  }

  // Display student marks
  for (int i = 0; i < n_stus; i++) {
    for (int j = 0; j < n_subs; j++) {
      printf("Marks of student %d in subject %d: %d\n", i + 1, j + 1, marks[i][j]);
    }
  }

  return 0;
}
