#include <stdio.h>
// Define structure
struct Student {
    char name[50];
    int roll;
    float marks;
};
int main() {
    struct Student students[3];  // Array of 3 students
    // Input student details
    for (int i = 0; i < 3; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%d[^\n]", students[i].name);  // Reads full name including spaces
        printf("Roll Number: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("\n");
    }
    // Display student details
    printf("Student Details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll);
        printf("Marks: %.2f\n\n", students[i].marks);
    }
    return 0;
}
