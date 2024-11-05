#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 200


void writeParagraph() {
    FILE *file = fopen("output.txt", "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        return;
    }

    char paragraph[MAX_LENGTH];
    printf("Enter a paragraph (up to 200 characters): ");
    fgets(paragraph, MAX_LENGTH, stdin);

    fprintf(file, "%s", paragraph);
    fclose(file);
    printf("Paragraph written to output.txt successfully.\n");
}


void readParagraph() {
    FILE *file = fopen("output.txt", "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        return;
    }

    char paragraph[MAX_LENGTH];
    printf("Content of output.txt:\n");
    while (fgets(paragraph, MAX_LENGTH, file) != NULL) {
        printf("%s", paragraph);
    }

    fclose(file);
}

void appendParagraph() {
    FILE *file = fopen("output.txt", "a");
    if (file == NULL) {
        perror("Error opening file for appending");
        return;
    }

    char paragraph[MAX_LENGTH];
    printf("Enter an additional paragraph (up to 200 characters): ");
    fgets(paragraph, MAX_LENGTH, stdin);

    fprintf(file, "%s", paragraph);
    fclose(file);
    printf("Additional paragraph appended to output.txt successfully.\n");
}

int main() {
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Write a paragraph to output.txt\n");
        printf("2. Read the content of output.txt\n");
        printf("3. Append a paragraph to output.txt\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);
        getchar(); 

        switch (choice) {
            case 1:
                writeParagraph();
                break;
            case 2:
                readParagraph();
                break;
            case 3:
                appendParagraph();
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
