// Your code here...
#include <stdio.h>
void check(int n,int arr[]){
    int index=0;
    for(int i=0;i<n;i++){
        if(arr[i] !=0){
            arr[index]=arr[i];
            index++;

        }
    }
    for(int i=0;i<n;i++){
        arr[i]=0;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    check(n,arr);
    for (int i=0;i<n;i++){
        printf("%d",arr[i]);

    }
    printf("\n");
    return 0;
}