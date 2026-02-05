#include <stdio.h>

int main() {
    FILE *sourceFile, *destFile;
    char ch;

    // 1. OPEN SOURCE FILE (Read Mode "r")
    
    sourceFile = fopen("source.txt", "r");

    // 2. OPEN/CREATE DESTINATION FILE (Write Mode "w")
    
    destFile = fopen("copy_destination.txt", "w");

    // 3. ERROR HANDLING
    if (sourceFile == NULL) {
        printf("Error: 'source.txt' not found or cannot be opened.\n");
        printf("Please create a 'source.txt' file in the same directory first.\n");
        return 1; // Exit with error code
    }
    
    if (destFile == NULL) {
        printf("Error: Could not create destination file.\n");
        fclose(sourceFile); // Close the source before exiting
        return 1;
    }

    printf("Copying file...\n");

    // 4. COPY LOGIC (Byte by Byte)
    // Loop continues until End Of File (EOF) is reached
    while ((ch = getc(sourceFile)) != EOF) {
        putc(ch, destFile);
    }

    printf("Success! File copied to 'copy_destination.txt'.\n");

    // 5. CLOSE FILES 
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}
