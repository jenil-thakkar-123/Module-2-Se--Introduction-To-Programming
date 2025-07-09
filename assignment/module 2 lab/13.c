#include <stdio.h>
int main() {
    FILE *file;
    char str[] = "Hello, this is a test string written to the file.";
    char buffer[100];
    // Step 1: Create and open file in write mode
    file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    // Step 2: Write string to file
    fprintf(file, "%s", str);

    // Step 3: Close the file
    fclose(file);

    // Step 4: Open file in read mode
    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    // Step 5: Read and display file content
    printf("Reading from file:\n");
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
    // Close file again
    fclose(file);
    return 0;
}
