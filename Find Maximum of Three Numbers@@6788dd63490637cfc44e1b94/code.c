
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);  // Takes input of three integers.
    
    if (a >= b && a >= c) {
        printf("%d", a);  // If a is greater than or equal to both b and c, print a.
    } else if (b >= a && b >= c) {
        printf("%d", b);  // If b is greater than or equal to both a and c, print b.
    } else {
        printf("%d", c);  // If neither of the above, print c.
    }

    return 0;  // Return statement to indicate successful program termination.
}
