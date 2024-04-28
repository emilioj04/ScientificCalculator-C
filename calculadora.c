#include <stdio.h>
#include <math.h>

// Function declarations
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double sine(double angle);
double cosine(double angle);
double tangent(double angle);
double arcsine(double value);
double arccosine(double value);
double arctangent(double value);
double exponentiation(double base, double exponent);
double squareRoot(double value);
double cubeRoot(double value);
double nthRoot(double value, double n);
double factorial(double num);
double logarithm(double value);
double naturalLogarithm(double value);
double customBaseLogarithm(double value, double base);

// Main function
int main() {
    double num1, num2, result;
    char operator;

    printf("Enter an expression: ");
    scanf("%lf %c %lf", &num1, &operator, &num2);

    switch (operator) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        case 's':
            result = sine(num1);
            break;
        case 'c':
            result = cosine(num1);
            break;
        case 't':
            result = tangent(num1);
            break;
        case 'a':
            // Assuming 'a' is used for trigonometric inverse functions
            result = arcsine(num1);
            break;
        case 'b':
            // Assuming 'b' is used for logarithmic functions
            result = logarithm(num1);
            break;
        default:
            printf("Invalid operator.\n");
            return 1;
    }

    printf("Result: %lf\n", result);

    return 0;
}

// Function definitions
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero.\n");
        return 0;
    }
}

double sine(double angle) {
    return sin(angle * M_PI / 180.0);
}

double cosine(double angle) {
    return cos(angle * M_PI / 180.0);
}

double tangent(double angle) {
    return tan(angle * M_PI / 180.0);
}

double arcsine(double value) {
    return asin(value) * 180.0 / M_PI;
}

double arccosine(double value) {
    return acos(value) * 180.0 / M_PI;
}

double arctangent(double value) {
    return atan(value) * 180.0 / M_PI;
}

double exponentiation(double base, double exponent) {
    return pow(base, exponent);
}

double squareRoot(double value) {
    return sqrt(value);
}

double cubeRoot(double value) {
    return cbrt(value);
}

double nthRoot(double value, double n) {
    return pow(value, 1.0 / n);
}

double factorial(double num) {
    if (num < 0) {
        printf("Error: Factorial of a negative number is undefined.\n");
        return 0;
    }
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

double logarithm(double value) {
    return log10(value);
}

double naturalLogarithm(double value) {
    return log(value);
}

double customBaseLogarithm(double value, double base) {
    return log(value) / log(base);
}

