// Q98: Print initials of a name with the surname displayed in full.
// Example: "John David Doe" -> "J.D. Doe"

#include <stdio.h>

int main() {
    char name[100];
    char words[10][50];
    int wordCount = 0;
    int i = 0, j = 0;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    // Split the name into words
    while (name[i] != '\0' && name[i] != '\n') {
        if (name[i] != ' ') {
            words[wordCount][j] = name[i];
            j++;
        } else {
            if (j > 0) {
                words[wordCount][j] = '\0';
                wordCount++;
                j = 0;
            }
        }
        i++;
    }
    if (j > 0) {
        words[wordCount][j] = '\0';
        wordCount++;
    }

    // Print initials for all words except the last
    for (i = 0; i < wordCount - 1; i++) {
        printf("%c.", words[i][0]);
    }

    // Print the last word (surname) in full
    if (wordCount > 0) {
        printf(" %s\n", words[wordCount - 1]);
    }

    return 0;
}
