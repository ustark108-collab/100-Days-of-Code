// Q94: Find the longest word in a sentence.

#include <stdio.h>

int main() {
    char sentence[200];
    char longest[100] = "";
    char current[100] = "";
    int i = 0, j = 0;
    int maxLen = 0, curLen = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    while (sentence[i] != '\0') {
        if (sentence[i] != ' ' && sentence[i] != '\n') {
            current[j] = sentence[i];
            j++;
            curLen++;
        } else {
            current[j] = '\0';
            if (curLen > maxLen) {
                maxLen = curLen;
                int k = 0;
                while (current[k] != '\0') {
                    longest[k] = current[k];
                    k++;
                }
                longest[k] = '\0';
            }
            j = 0;
            curLen = 0;
        }
        i++;
    }

    // Check last word
    current[j] = '\0';
    if (curLen > maxLen) {
        int k = 0;
        while (current[k] != '\0') {
            longest[k] = current[k];
            k++;
        }
        longest[k] = '\0';
    }

    printf("Longest word: %s\n", longest);

    return 0;
}
