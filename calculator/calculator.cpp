#include <stdio.h>

double add(double num1, double num2);
double subtract(double num1, double num2);
double divide(double num1, double num2);
double multiply(double num1, double num2);

int main(void) {
    int operation;
    double num1, num2;

    printf("Enter your choice:\n1.Add\n2.Subtract\n3.Multiply\n4.Divide\n");
    scanf("%d", &operation);

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    double result;

    if (operation == 1) result = add(num1, num2);
    else if (operation == 2) result = subtract(num1, num2);
    else if (operation == 3) result = multiply(num1, num2);
    else if (operation == 4) {
        if (num2 == 0) {
            printf("Cannot divide by zero\n");
            return 1;
        }
        result = divide(num1, num2);
    }
    else {
        printf("Invalid choice\n");
        return 1;
    }

    printf("Result: %.2lf\n", result);
    return 0;
}

double add(double num1, double num2) { return num1 + num2; }
double subtract(double num1, double num2) { return num1 - num2; }
double multiply(double num1, double num2) { return num1 * num2; }
double divide(double num1, double num2) { return num1 / num2; }

