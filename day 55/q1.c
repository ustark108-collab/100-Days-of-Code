// Q105: Find the majority element in an array.
// Majority element appears strictly more than floor(n/2) times.
// Print -1 if no such element exists.

#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int majority = -1;
    int threshold = n / 2;

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (nums[j] == nums[i]) {
                count++;
            }
        }
        if (count > threshold) {
            majority = nums[i];
            break;
        }
    }

    printf("%d\n", majority);

    return 0;
}
