#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);  // Reads a single character input
    
    switch(a) {
        case 'R':  // 'R' is the character literal for Red
            printf("Stop");
            break;
        case 'G':  // 'G' is the character literal for Green
            printf("Go");
            break;
        case 'Y':  // 'Y' is the character literal for Yellow
            printf("Slow Down");
            break;
        default:
            printf("Invalid input");  // Default case for invalid input
            break;
    }
    return 0;
}

