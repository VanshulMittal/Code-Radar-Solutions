// Your code here...
#include <stdio.h>
#include <stdlib.h>
int sum(int num){
    num = abs(num);
    if (num==0) return 0;
    return (num % 10)+sum (num/10);
}
int main(){
    int n;
    scanf("%d",&n);
    
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        printf("%d ",sum(arr[i]));

    }
    return 0;
}



