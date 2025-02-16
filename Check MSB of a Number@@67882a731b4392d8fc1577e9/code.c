// Your code here...
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num & (1 << 31))  // Check if MSB is 1
        printf("Set");
    else
        printf("Not Set");

    return 0;
}