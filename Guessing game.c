#include <stdio.h>
int main() {
  int secret = 42;
int guess, attempts = 0;
printf("NUMBER GUESSING GAME\n");
printf("Guess a number between 1 and 100:\n");
while (1) {
printf("\nEnter your guess: ");
scanf("%d", &guess);
attempts++;
if (guess > secret) {
printf("Too high! Try again.\n");
}
else if (guess < secret) {
printf("Too low! Try again.\n");
}
else {
printf("Correct! You guessed it in %d attempts.\n", attempts);
break;
}
}
return 0;
}
