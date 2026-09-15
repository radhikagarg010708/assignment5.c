//Write a C program that takes input as weight in kilograms and height in metres. Calculate BMI and classify it as
#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Enter weight (in kg): ");
    scanf("%f", &weight);

    printf("Enter height (in metres): ");
    scanf("%f", &height);

    // Validate weight and height
    if (weight <= 0 || height <= 0) {
        printf("Invalid input: weight and height must be positive values.\n");
        return 0;
    }

    // Calculate BMI
    bmi = weight / (height * height);

    printf("\nBMI = %.2f\n", bmi);

    // Classify BMI
    if (bmi < 18.5)
        printf("Category: Underweight\n");
    else if (bmi >= 18.5 && bmi <= 24.9)
        printf("Category: Normal\n");
    else if (bmi >= 25.0 && bmi <= 29.9)
        printf("Category: Overweight\n");
    else if (bmi >= 30.0 && bmi <= 34.9)
        printf("Category: Obesity Class I\n");
    else if (bmi >= 35.0 && bmi <= 39.9)
        printf("Category: Obesity Class II\n");
    else
        printf("Category: Obesity Class III\n");

    return 0;
}