#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    // Input two strings
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    // Remove newline characters if present
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    // Concatenate str2 to str1
    strcat(str1, str2);
    // Display result
    printf("\nConcatenated string: %s\n", str1);
    printf("Length of concatenated string: %lu\n", strlen(str1));
    return 0;
}
