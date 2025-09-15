/* A narcissistic number is a number whose sum of each digit raised to the power of the number of digits is equal to the number. */
#include <stdio.h>

// For using integer exponentiation instead of pow and round functions.
int int_pow(int base, int exp) {
    int result = 1;
    while (exp--) {
        result *= base;
    }
    return result;
}

// This function gets the number of digits in a number to use as the power.
int CountDigits(int a) {
    if (a < 0) a = -a; // Fix: ensure digit count is based on positive value
    if (a == 0) return 1; // 1 because even 0 is a digit.

    int count = 0;
    while (a > 0) {
        count++;
        a /= 10;
    }
    return count;
}

// Helper function that performs the recursive sum using a fixed digit count.
int sumofdigitspower_helper(int b, int c) {
    if (b == 0) {
        return 0;
    } else {
        return int_pow(b % 10, c) + sumofdigitspower_helper(b / 10, c);
    }
}

// This function calculates the sum of digits raised to the fixed power.
int sumofdigitspower(int b) {
    if (b < 0) b = -b; // Fix: ensure digit power sum uses positive value
    int c = CountDigits(b);
    return sumofdigitspower_helper(b, c);
}

// In the main function, we take input from the user, check if it's a narcissistic number, and display the output.
int main() {
    int a;
    printf("Enter a Number: ");
    scanf("%d", &a);

    // Using integer result from sumofdigitspower to compare directly.
    int b = sumofdigitspower(a); // Fix: no need to manually convert to positive here

    // Now we compare the results using ternary operator.
    if (a < 0) { // This is to handle negative input.
        int c = a;
        printf("%d is%s a narcissistic number\n", c, (b == -c) ? "" : " not");
    } else {
        printf("%d is%s a narcissistic number\n", a, (b == a) ? "" : " not");
    }

    return 0;
}