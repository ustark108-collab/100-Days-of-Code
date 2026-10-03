// Q102: Find the index of the smallest element >= x (ceil of x) in a sorted array.
// Print -1 if no such element exists.

#include <stdio.h>

int main() {
    int n, x;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter sorted array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    int result = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= x) {
            result = i;
            break;
        }
    }

    printf("%d\n", result);

    return 0;
}
