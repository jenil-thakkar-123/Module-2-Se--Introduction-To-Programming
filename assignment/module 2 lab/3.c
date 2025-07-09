#include <stdio.h>
int main() {
    // Constant declaration
    const float PI = 3.14159;

    // Variable declarations
    int age = 20;               // Integer variable
    char grade = 'A';           // Character variable
    float height = 5.9;         // Float variable

    // Output the values
    printf("Student Details:\n");
    printf("Age: %d years\n", age);
    printf("Grade: %c\n", grade);
    printf("Height: %.1f feet\n", height);
    printf("Value of PI (constant): %.5f\n", PI);
    return 0;
}
// //Explanation
// const float PI = 3.14159; → A constant float that cannot be changed.
// int, char, float → Show how different data types are used.
// //Comments (// and /* */) explain what each part does.
// printf is used to display the values with formatting.
