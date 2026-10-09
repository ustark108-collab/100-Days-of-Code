// Q108: Product of Array Except Self.
// For each element, print the product of all other elements.
// Do not use division.

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

    int answer[n];

    // Build left prefix products
    answer[0] = 1;
    for (int i = 1; i < n; i++) {
        answer[i] = answer[i - 1] * nums[i - 1];
    }

    // Multiply with right suffix products
    int rightProduct = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= rightProduct;
        rightProduct *= nums[i];
    }

    printf("Result: ");
    for (int i = 0; i < n; i++) {
        if (i > 0) printf(",");
        printf("%d", answer[i]);
    }
    printf("\n");

    return 0;
}
