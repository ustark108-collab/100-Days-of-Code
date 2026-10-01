// Q100: Print all sub-strings of a string.
// Example: "abc" -> "a,ab,abc,b,bc,c"

#include <stdio.h>

int main() {
    char str[100];
    int len = 0;
    int i, j, k;
    int first = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[len] != '\0') len++;

    for (i = 0; i < len; i++) {
        for (j = i + 1; j <= len; j++) {
            if (!first) {
                printf(",");
            }
            for (k = i; k < j; k++) {
                printf("%c", str[k]);
            }
            first = 0;
        }
    }
    printf("\n");

    return 0;
}
