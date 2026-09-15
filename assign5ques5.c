//Write a C program to implement a menu-driven banking system with the following options:
#include <stdio.h>

int main() {
    double balance = 5000.0;  // Initial balance
    int choice;
    double amount, rate, time, interest;

    while (1) {
        printf("\n----- BANK MENU -----\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Calculate Annual Simple Interest\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Current Balance: Rs. %.2lf\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%lf", &amount);
                if (amount <= 0) {
                    printf("Invalid amount! Deposit must be positive.\n");
                } else {
                    balance += amount;
                    printf("Amount deposited successfully.\n");
                    printf("New Balance: Rs. %.2lf\n", balance);
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%lf", &amount);
                if (amount <= 0) {
                    printf("Invalid amount! Withdrawal must be positive.\n");
                } else if (amount > balance) {
                    printf("Insufficient balance! Withdrawal denied.\n");
                } else {
                    balance -= amount;
                    printf("Amount withdrawn successfully.\n");
                    printf("New Balance: Rs. %.2lf\n", balance);
                }
                break;

            case 4:
                printf("Enter principal amount: ");
                scanf("%lf", &amount);
                printf("Enter rate of interest (in %%): ");
                scanf("%lf", &rate);
                printf("Enter time period (in years): ");
                scanf("%lf", &time);

                if (amount <= 0 || rate < 0 || time <= 0) {
                    printf("Invalid input! Principal and time must be positive, rate cannot be negative.\n");
                } else {
                    interest = (amount * rate * time) / 100;
                    printf("Simple Interest = Rs. %.2lf\n", interest);
                    printf("Total Amount after %.1lf year(s) = Rs. %.2lf\n", time, amount + interest);
                }
                break;

            case 5:
                printf("Thank you for banking with us. Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice! Please select a valid option (1-5).\n");
        }
    }

    return 0;
}
