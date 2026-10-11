// Q110: Find the maximum element in each subarray of size k (sliding window maximum).
// Print the maximum elements for each window separated by spaces.

#include <stdio.h>

int main() {
    int n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if (k > n) {
        printf("k is larger than array size.\n");
        return 0;
    }

    printf("Maximum elements in each window of size %d: ", k);

    for (int i = 0; i <= n - k; i++) {
        int maxVal = arr[i];
        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > maxVal) {
                maxVal = arr[j];
            }
        }
        if (i > 0) printf(" ");
        printf("%d", maxVal);
    }
    printf("\n");

    return 0;
}
