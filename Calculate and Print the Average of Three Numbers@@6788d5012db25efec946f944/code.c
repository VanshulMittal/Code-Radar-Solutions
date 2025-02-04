#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    float d = (a+b+c)/3;
    
    
    printf("Average: %.2f",d );
    return 0;
}