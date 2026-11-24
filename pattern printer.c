/*
* Star pattern printer
* Demonstrates nested for loops to print triangle and inverted triangle patterns.
  */
#include <stdio.h>
int main() {
  int rows, i, j;
printf("Enter number of rows: ");
scanf("%d", &rows);
printf("\n1. Right-Angled Triangle:\n");
for (i = 1; i <= rows; i++) {
for (j = 1; j <= i; j++) {
printf("* ");
}
printf("\n");
}
printf("\n2. Inverted Triangle:\n");
for (i = rows; i >= 1; i--) {
for (j = 1; j <= i; j++) {
printf("* ");
}
printf("\n");
}
return 0;
}
