// Q96: Reverse each word in a sentence without changing the word order.

#include <stdio.h>

int main() {
    char sentence[200];
    int i = 0, j, start, end;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove newline if present
    while (sentence[i] != '\0' && sentence[i] != '\n') i++;
    sentence[i] = '\0';

    i = 0;
    while (sentence[i] != '\0') {
        // Find start of word
        start = i;

        // Find end of word
        while (sentence[i] != ' ' && sentence[i] != '\0') {
            i++;
        }
        end = i - 1;

        // Reverse the word in-place
        while (start < end) {
            char temp = sentence[start];
            sentence[start] = sentence[end];
            sentence[end] = temp;
            start++;
            end--;
        }

        // Skip the space
        if (sentence[i] == ' ') {
            i++;
        }
    }

    printf("Result: %s\n", sentence);

    return 0;
}
