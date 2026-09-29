// Q95: Check if one string is a rotation of another.

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    char doubled[200];
    int len1 = 0, len2 = 0;
    int i, j, found;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Calculate lengths
    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;

    if (len1 != len2) {
        printf("Not rotation\n");
        return 0;
    }

    // Concatenate str1 with itself
    for (i = 0; i < len1; i++) doubled[i] = str1[i];
    for (i = 0; i < len1; i++) doubled[len1 + i] = str1[i];
    doubled[2 * len1] = '\0';

    // Check if str2 is a substring of doubled
    int isRotation = 0;
    for (i = 0; i <= len1; i++) {
        found = 1;
        for (j = 0; j < len2; j++) {
            if (doubled[i + j] != str2[j]) {
                found = 0;
                break;
            }
        }
        if (found) {
            isRotation = 1;
            break;
        }
    }

    if (isRotation) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }

    return 0;
}
