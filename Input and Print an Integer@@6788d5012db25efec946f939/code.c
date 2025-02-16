#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    fprintf(stderr, "%d\n", n); // Correct way to print to stderr
    return 0;
}
