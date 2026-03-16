#include <stdio.h>
void main(){
    int a[50],i,n,key;
    printf("No of elements= ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    int loc=-1;
    printf("Enter Key element= ");
    scanf("%d",&key);
    for (i=0;i<n;i++){
        if(a[i]==key){
            loc=i;
            printf("ELement found at index position: %d",loc);
        }
    }
    if (loc==-1){
        printf("Element not found");
    }
}