// Your code here...
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
       }
    int max1=arr[0];
    int max2=-1;
    for(int i=1;i<n;i++){
        if(abs(arr[i])>max1){
            max2=max1;
            max1=arr[i];
        }else if(abs(arr[i])>max2 && abs(arr[i])!=max1){
            max2 = arr[i];
        }
    }
 printf("%d",max1*max2);
        return 0;
}