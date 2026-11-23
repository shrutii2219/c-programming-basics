#include <stdio.h>
int main() {
  int choice;
float balance = 1000.0, amount;
while (1) {
printf("\nATM MENU\n");
printf("1. Check Balance\n");
printf("2. Deposit Money\n");
printf("3. Withdraw Money\n");
printf("4. Exit\n");
printf("Enter your choice (1-4): ");
scanf("%d", &choice);
if (choice == 1) {
printf("Current Balance = %.2f\n", balance);
}
else if (choice == 2) {
printf("Enter amount to deposit: ");
scanf("%f", &amount);
if (amount > 0) {
balance = balance + amount;
printf("Deposited! New Balance = %.2f\n", balance);
} else {
printf("Invalid amount!\n");
}
}
else if (choice == 3) {
printf("Enter amount to withdraw: ");
scanf("%f", &amount);
if (amount > balance) {
printf("Insufficient balance!\n");
} else if (amount <= 0) {
printf("Invalid amount!\n");
} else {
balance = balance - amount;
printf("Withdrawn! New Balance = %.2f\n", balance);
}
}
else if (choice == 4) {
printf("Thank you for using the ATM. Goodbye!\n");
break;
}
else {
printf("Invalid choice! Please enter 1 to 4.\n");
}
}
return 0;
}





