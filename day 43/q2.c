#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i;
    int palindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    // Find the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Compare characters from both ends
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome == 1) {
        printf("The string is a palindrome.");
    }
    else {
        printf("The string is not a palindrome.");
    }

    return 0;
}