//break statment
#include <stdio.h>
int main() {
    int i;
    printf("Using break statement:\n");
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            break;  
        }
        printf("%d ", i);
    }
    return 0;
}
//continue 
#include <stdio.h>
int main() {
    int i;
    printf("Using continue statement:\n");
    for (i = 1; i <= 5; i++) {
        if (i == 3) {
            continue;  // Skip the number 3
        }
        printf("%d ", i);
    }
    return 0;
}
