// Q93: Check if two strings are anagrams of each other.

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq[256] = {0};
    int i = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Increment frequency for str1
    while (str1[i] != '\0') {
        freq[(int)str1[i]]++;
        i++;
    }

    // Decrement frequency for str2
    i = 0;
    while (str2[i] != '\0') {
        freq[(int)str2[i]]--;
        i++;
    }

    // Check if all frequencies are zero
    int anagram = 1;
    for (int j = 0; j < 256; j++) {
        if (freq[j] != 0) {
            anagram = 0;
            break;
        }
    }

    if (anagram) {
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }

    return 0;
}
