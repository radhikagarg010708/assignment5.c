//Write a C program that accepts input as day, month, and year. Determine whether the date is valid. Consider:


#include <stdio.h>

int main()
{
    int day, month, year;

    printf("Enter day, month and year: ");
    scanf("%d %d %d", &day, &month, &year);

    if (year > 0)
    {
        if (month >= 1 && month <= 12)
        {
            if (month == 2)
            {
                if (day >= 1 && day <= 28)
                {
                    printf("Valid date");
                }
                else
                {
                    if (day == 29 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
                    {
                        printf("Valid date");
                    }
                    else
                    {
                        printf("Invalid date");
                    }
                }
            }
            else
            {
                if (month == 4 || month == 6 || month == 9 || month == 11)
                {
                    if (day >= 1 && day <= 30)
                    {
                        printf("Valid date");
                    }
                    else
                    {
                        printf("Invalid date");
                    }
                }
                else
                {
                    if (day >= 1 && day <= 31)
                    {
                        printf("Valid date");
                    }
                    else
                    {
                        printf("Invalid date");
                    }
                }
            }
        }
        else
        {
            printf("Invalid month");
        }
    }
    else
    {
        printf("Invalid year");
    }

    return 0;
}
