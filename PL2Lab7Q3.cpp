#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void findFrequency(char *str) {
    int *frequency = (int *)calloc(256, sizeof(int));
    if (frequency == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        frequency[(unsigned char)str[i]]++;
    }

    printf("Character frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (frequency[i] > 0) {
            printf("'%c': %d\n", i, frequency[i]);
        }
    }

    free(frequency);
}

int main() {
    char *str;
    str = (char *)malloc(100 * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove trailing newline character

    findFrequency(str);

    free(str);
    return 0;
}

