#include <stdio.h>
int main() {
    int num = 10;        // Declare an integer variable
    int *ptr;            // Declare a pointer to int
    ptr = &num;          // Assign the address of num to the pointe
    printf("Original value of num: %d\n", num);
    *ptr = 20;           // Modify the value of num using the pointer
    printf("Modified value of num using pointer: %d\n", num);
    return 0;
}
