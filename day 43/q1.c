#include <stdio.h>

int main() {
    char str[100];
    int i = 0, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Ignore the newline added by fgets()
    if (str[length - 1] == '\n') {
        length--;
    }

    printf("Reversed string: ");

    // Print from last character to first
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}