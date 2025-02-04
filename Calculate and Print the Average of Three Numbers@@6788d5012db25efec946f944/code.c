#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int d = a+b+c;
    float e= d/3.0;

    
    
    printf("Average: %.2f",e);
    return 0;
}