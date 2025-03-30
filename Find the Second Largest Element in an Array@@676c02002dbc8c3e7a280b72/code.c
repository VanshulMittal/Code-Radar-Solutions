// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    arr[n];
    scanf("%d ",arr[0]);
    int max=arr[0];
    int max2=-1;
    for(int i=1;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max){
            max1=max;
            max=arr[i];
        }else if(arr[i]>max1 && arr[i] != max){
            max1=arr[i];
        }
    }
    printf("%d",max1);
    return 0;
}