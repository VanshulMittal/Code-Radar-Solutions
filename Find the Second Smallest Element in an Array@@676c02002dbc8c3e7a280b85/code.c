#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if (n < 2) {  // If array has less than 2 elements
        printf("Array must have at least two elements.\n");
        return 1;
    }

    int arr[n];  // Declare array properly
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];  // Largest number
    int max2 = -1;     // Second largest number

    for (int i = 1; i < n; i++) {
        if (arr[i] < max) {
            max2 = max;  // Update second largest
            max = arr[i]; // Update largest
        } else if (arr[i]  < max2 && arr[i] != max) {
            max2 = arr[i];  // Update second largest
        }
    }
        printf("%d\n", max2);

    return 0;
}
