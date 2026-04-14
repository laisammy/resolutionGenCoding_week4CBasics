#include <stdio.h>
#include <stdlib.h>

int main() {
    double a, b, answer;
    int operation;

    printf("Enter first number:\n");
    scanf("%lf", &a);

    printf("Enter type of operation (1: Addition, 2: Subtraction, 3: Multiplication, 4: Division):\n");
    scanf("%d", &operation);

    printf("Enter second number:\n");
    scanf("%lf", &b);

    if (operation == 1) {
        answer = a + b;
        printf("Answer: %lf", answer);
    } else if (operation == 2) {
        answer = a - b;
        printf("Answer: %lf", answer);
    } else if (operation == 3) {
        answer = a * b;
        printf("Answer: %lf", answer);
    } else {
        answer = a / b;
        printf("Answer: %lf", answer);
    }
}