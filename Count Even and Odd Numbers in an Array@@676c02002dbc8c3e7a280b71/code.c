// Your code here...
#include <stdio.h>
void count(int arr[],int n){
    int odd=0,even=0;
    for(int i=0;i<n;i++){
        if (arr[i]%2==0){
            even+=1;

        }
        else{
            odd +=1;
        }
    }
    printf("%d ",even);
    print("%d",odd);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    count(arr,n);
    
    return 0;
}