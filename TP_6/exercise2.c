#include <stdio.h>

// Function to calculate the power of a number
int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else {
        return base * power(base, exponent - 1);
    }
}

// Function to calculate the sum of the digits of a number
int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n % 10 + sumOfDigits(n / 10);
    }
}

// Function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Function to generate the nth value of the Fibonacci sequence
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int base = 2, exponent = 3;
    printf("Power: %d\n", power(base, exponent));

    int number = 123;
    printf("Sum of digits: %d\n", sumOfDigits(number));

    int n = 5;
    printf("Factorial: %d\n", factorial(n));

    printf("Fibonacci: %d\n", fibonacci(n));

    return 0;
}