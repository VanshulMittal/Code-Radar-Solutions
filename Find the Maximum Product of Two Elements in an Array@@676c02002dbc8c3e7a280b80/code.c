// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    scanf("%d ",&arr[0]);
    int max1=arr[0];
    int max2=-1;
    for(int i=1;i<n;i++){
        scanf("%d",arr[i]);
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }else if (arr[i]>max2 && arr[i] != max1){
            max2 =arr[i];
        }
       
    }
 printf("%d",max1*max2);
        return 0;
}