// Q91: Remove all vowels from a string.

#include <stdio.h>

int isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

int main() {
    char str[100];
    char result[100];
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (!isVowel(str[i])) {
            result[j] = str[i];
            j++;
        }
        i++;
    }
    result[j] = '\0';

    printf("String after removing vowels: %s\n", result);

    return 0;
}
