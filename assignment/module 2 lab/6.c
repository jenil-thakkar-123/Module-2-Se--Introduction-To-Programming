#include <stdio.h>
int main() {
    int i;

    // Using while loop
    i = 1;
    printf("Using while loop:\n");
    while (i <= 10) {
        printf("%d ", i);
        i++;
    }

    // Using for loop
    printf("\n\nUsing for loop:\n");
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }

    // Using do-while loop
    i = 1;
    printf("\n\nUsing do-while loop:\n");
    do {
        printf("%d ", i);
        i++;
    } while (i <= 10);
    printf("\n");  
    return 0;
}
