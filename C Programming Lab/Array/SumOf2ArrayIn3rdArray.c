#include <stdio.h>
void main(){
    int a[50],b[50],c[50],i,n,temp;
    printf("No of elements in both lists: ");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
        printf("b[%d]=",i);
        scanf("%d",&b[i]);
        c[i]=a[i]+b[i];
    }
    printf("Third Array :- \n");
    for (i=0;i<n;i++){
        printf("%d\n",c[i]);
    }
}