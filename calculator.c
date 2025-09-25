#include <stdio.h>
#include <stdlib.h>
int main() {
    int x, y;
    char choice;
    printf("Enter the two numbers: ");
    scanf("%d %d", &x, &y);
    start:
    printf("Enter the Operator (+,-,*,/)\n");
    scanf(" %c", &choice);
    switch (choice) {
    case '+':
        printf("%d + %d = %d\n", x, y, x + y);
        break;
    case '-':
        printf("%d - %d = %d\n", x, y, x - y);
        break;
    case '*':
        printf("%d * %d = %d\n", x, y, x * y);
        break;
    case '/':
        printf("%d / %d = %d\n", x, y, x / y);
        break;
    default:
        printf("Invalid Operator Input\n");
        goto  start;
    }
    return 0;
}