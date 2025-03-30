// Your code here...
#include <stdio.h>
void even(int arr[],int n){
    int d=-1;
    int max=arr[0]
    for(int i =0;i<n;i++){
        if(arr[i]%2 ==0){
            if(arr[i]>max){
                max=arr[i];
                
            }
            printf("%d",max);

        }
        else{
            printf("%d",d);
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        enen(arr,n);
        return 0;
    }
}