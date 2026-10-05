// Q104: Find the pivot integer x such that:
// sum(1 to x) == sum(x to n)
// Print -1 if no such integer exists.

#include <stdio.h>
#include <math.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int pivot = -1;

    for (int x = 1; x <= n; x++) {
        int leftSum = x * (x + 1) / 2;
        int rightSum = n * (n + 1) / 2 - x * (x - 1) / 2;
        if (leftSum == rightSum) {
            pivot = x;
            break;
        }
    }

    printf("%d\n", pivot);

    return 0;
}
