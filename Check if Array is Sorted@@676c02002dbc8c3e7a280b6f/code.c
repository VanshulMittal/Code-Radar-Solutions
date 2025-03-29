// Your code here...
#include <stdio.h>
void checksorted(int arr[],int n){
    for ( int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            printf("Not Sorted\n");
            return;
        }
    }
    printf("Sorted\n");
}
int main(){
    int n,i;
    int arr[n];
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        scanf("%d",arr[i]);
        
    }
    checksorted(arr,n);
    return 0;

}