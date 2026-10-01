// Q99: Change the date format from dd/MM/yyyy to dd-Mon-yyyy.
// Example: "15/04/2025" -> "15-Apr-2025"

#include <stdio.h>

int main() {
    char date[20];
    int day, month, year;
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    printf("Enter date (dd/MM/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    if (month >= 1 && month <= 12) {
        printf("%02d-%s-%d\n", day, months[month - 1], year);
    } else {
        printf("Invalid month.\n");
    }

    return 0;
}
