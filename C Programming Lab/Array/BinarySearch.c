#include <stdio.h>
void main(){
    int a[50],key,i,n;
    printf("No of elements= ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    int beg=0,end=n-1,mid;
    printf("Enter key element= ");
    scanf("%d",&key);
    while(beg<=end){
        mid=(beg+end)/2;
        if(a[mid]==key){
            printf("Key found at %d",mid);
        }
        else if(a[mid]>key){
            end=mid-1;
        }
        else{
            beg=mid+1;
        }
    }
    if(beg>end){
        printf("Key not found");
    }
}