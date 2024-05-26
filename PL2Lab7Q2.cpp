#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// This function searches for all occurrences of a substring in a string
void searchWord(char* str1, char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int found = 0;

    for (int i = 0; i <= len1 - len2; i++) {
        if (strncmp(&str1[i], str2, len2) == 0) {
            printf("Word found at index: %d\n", i);
            found = 1;
        }
    }

    if (!found) {
        printf("Word not found in the sentence.\n");
    }
}

int main() {
    char *str1, *str2;
    str1 = (char*)malloc(100 * sizeof(char));
    str2 = (char*)malloc(20 * sizeof(char));

    if (str1 == NULL || str2 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the sentence: ");
    fgets(str1, 100, stdin);
    str1[strcspn(str1, "\n")] = '\0';  // Remove trailing newline character

    printf("Enter the word to search: ");
    fgets(str2, 20, stdin);
    str2[strcspn(str2, "\n")] = '\0';  // Remove trailing newline character

    searchWord(str1, str2);

    free(str1);
    free(str2);

    return 0;
}

