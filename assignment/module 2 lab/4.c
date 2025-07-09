#include <stdio.h>
int main() {
    int a, b;
    // Get input from user
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    // Arithmetic operations
    printf("\n--- Arithmetic ---\n");
    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);

    // Relational operations
    printf("\n--- Relational ---\n");
    printf("Are they equal? %d\n", a == b);
    printf("Is a greater than b? %d\n", a > b);

    // Logical operations
    printf("\n--- Logical ---\n");
    printf("a AND b (a && b): %d\n", a && b);
    printf("a OR b (a || b): %d\n", a || b);
    return 0;
}
