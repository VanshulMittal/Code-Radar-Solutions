#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Read the first element and initialize min and max
    scanf("%d", &arr[0]);
    int max = arr[0], min = arr[0];

    // Read the remaining elements and update min/max
    for (int i = 1; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > max) {
            max = arr[i];  // Update max
        }
        if (arr[i] < min) {
            min = arr[i];  // Update min
        }
    }

    printf("%d %d\n", min, max);
    return 0;
}
