// Your code here...
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
     int max=arr[0];
    int min=arr[n-1];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max){
            arr[i]=max;
        }
        elif(arr[i]<min){
            arr[i]=min;
        }

    }
   printf("%d %d",min,max);
   return 0;

}