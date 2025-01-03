#include<stdio.h>

int main(){
    int n,k,count=0;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n; i++){
        if(arr[k-1]<=arr[i] && arr[i]>0)
            count++;
    }
    printf("%d",count);

    return 0;
}
