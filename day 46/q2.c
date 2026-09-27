// Q92: Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};
    int i = 0;
    char result = '\0';

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of each lowercase letter
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
        }
        i++;
    }

    // Find the first repeating character
    i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z' && freq[str[i] - 'a'] > 1) {
            result = str[i];
            break;
        }
        i++;
    }

    if (result != '\0') {
        printf("First repeating character: %c\n", result);
    } else {
        printf("No repeating character found.\n");
    }

    return 0;
}
