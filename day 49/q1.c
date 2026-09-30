// Q97: Print the initials of a name.

#include <stdio.h>

int main() {
    char name[100];
    int i = 0;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    // Print the first character as initial
    if (name[0] != ' ' && name[0] != '\0' && name[0] != '\n') {
        printf("%c.", name[0]);
    }

    // Print initials for subsequent words
    while (name[i] != '\0' && name[i] != '\n') {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0' && name[i + 1] != '\n') {
            printf("%c.", name[i + 1]);
        }
        i++;
    }

    printf("\n");

    return 0;
}
