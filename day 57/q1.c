// Q107: Find the previous greater element for each element in an array.
// If no previous greater element exists, print -1 for that element.
// Output: comma-separated values.

#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Previous greater elements: ");
    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                if (i > 0) printf(", ");
                printf("%d", arr[j]);
                found = 1;
                break;
            }
        }
        if (!found) {
            if (i > 0) printf(", ");
            printf("-1");
        }
    }
    printf("\n");

    return 0;
}
