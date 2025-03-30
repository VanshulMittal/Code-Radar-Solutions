// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int min=arr[0];
    int min1=-1;
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min1=min;
            min=arr[i];

        }else if(arr[i]<min1 && arr[i] != min){
            min1=arr[i];
        }
    }
    printf("%d",&min1);
    return 0;
}