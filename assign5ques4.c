//Write a C program to create a menu-driven calculator that displays the following menu:
#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num1, num2, result;

    while (1) {
        printf("\n----- MENU -----\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Power\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 7) {
            printf("Exiting the calculator. Goodbye!\n");
            break;
        }

        if (choice < 1 || choice > 7) {
            printf("Invalid choice! Please select a valid option.\n");
            continue;
        }

        printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;

            case 2:
                result = num1 - num2;
                printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;

            case 3:
                result = num1 * num2;
                printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;

            case 4:
                if (num2 == 0)
                    printf("Error: Division by zero is not allowed.\n");
                else {
                    result = num1 / num2;
                    printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
                }
                break;

            case 5:
                if ((int)num2 == 0)
                    printf("Error: Modulus by zero is not allowed.\n");
                else {
                    result = (int)num1 % (int)num2;
                    printf("Result: %d %% %d = %.0lf\n", (int)num1, (int)num2, result);
                }
                break;

            case 6:
                result = pow(num1, num2);
                printf("Result: %.2lf ^ %.2lf = %.2lf\n", num1, num2, result);
                break;
        }
    }

    return 0;
}
