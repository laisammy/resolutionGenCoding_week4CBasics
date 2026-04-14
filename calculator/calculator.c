#include <stdio.h>
#include <stdlib.h>

int main() {
    double a, b, answer;
    int operation;

    printf("Enter first number:\n");
    while (scanf("%lf", &a) != 1) {
        printf("Invalid input. Please enter a number:\n");
        while (getchar() != '\n');
    }

    printf("Enter type of operation (1: Addition, 2: Subtraction, 3: Multiplication, 4: Division):\n");
    while (scanf("%d", &operation) != 1 || operation < 1 || operation > 4) {
        printf("Invalid operation. Enter 1, 2, 3, or 4:\n");
        while (getchar() != '\n');
    }

    printf("Enter second number:\n");
    while (scanf("%lf", &b) != 1) {
        printf("Invalid input. Please enter a number:\n");
        while (getchar() != '\n');
    }

    if (operation == 4 && b == 0) {
        printf("Error: Cannot divide by zero.\n");
        return 1;
    }

    switch (operation) {
        case 1: answer = a + b; break;
        case 2: answer = a - b; break;
        case 3: answer = a * b; break;
        case 4: answer = a / b; break;
    }

    printf("Answer: %lf\n", answer);
    printf("\nPress Enter to exit...");
    while (getchar() != '\n');
    getchar();
}
