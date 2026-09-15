//Write a C program that accepts input as coefficients a, b, and c of quadratic equation ax^2+bx+c=0
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Reject a = 0
    if (a == 0) {
        printf("Invalid input: 'a' cannot be 0 (not a quadratic equation).\n");
        return 0;
    }

    discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Discriminant = %.2lf\n", discriminant);
        printf("Roots are real and distinct.\n");
        printf("Root1 = %.2lf\n", root1);
        printf("Root2 = %.2lf\n", root2);
    }
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Discriminant = %.2lf\n", discriminant);
        printf("Roots are real and equal.\n");
        printf("Root1 = Root2 = %.2lf\n", root1);
    }
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Discriminant = %.2lf\n", discriminant);
        printf("Roots are imaginary (complex conjugates).\n");
        printf("Root1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root2 = %.2lf - %.2lfi\n", realPart, imagPart);
    }

    return 0;
}