//practical 01 
//(Q1)
#include <stdio.h>

int main() {
    // Displaying name
    printf("Your Name\n");

    // Displaying school name
    printf("School Name\n");

    return 0;
}

//(Q2)
#include <stdio.h>

int main() {
    int rows = 5; // You can adjust the number of rows as needed

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

//(Q3)

#include <stdio.h>

int main() {
    // Input for int
    int integerVar;
    printf("Enter an integer: ");
    scanf("%d", &integerVar);
    printf("Integer value: %d\n", integerVar);

    // Input for float
    float floatVar;
    printf("Enter a float: ");
    scanf("%f", &floatVar);
    printf("Float value: %f\n", floatVar);

    // Input for double
    double doubleVar;
    printf("Enter a double: ");
    scanf("%lf", &doubleVar);
    printf("Double value: %lf\n", doubleVar);

    // Input for char
    char charVar;
    printf("Enter a character: ");
    scanf(" %c", &charVar); // Note the space before %c to consume any whitespace characters
    printf("Character value: %c\n", charVar);

    return 0;
}


//(Q4)

#include <stdio.h>

int main() {
    // Input for the first integer
    int num1;
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    // Input for the second integer
    int num2;
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Calculate the total
    int total = num1 + num2;

    // Display the total
    printf("The total is: %d\n", total);

    return 0;
}

//(Q5)
#include <stdio.h>

int main() {
    // Input for the first decimal number
    double num1;
    printf("Enter the first decimal number: ");
    scanf("%lf", &num1);

    // Input for the second decimal number
    double num2;
    printf("Enter the second decimal number: ");
    scanf("%lf", &num2);

    // Calculate the average
    double average = (num1 + num2) / 2;

    // Display the average with decimals
    printf("The average is: %lf\n", average);

    return 0;
}

