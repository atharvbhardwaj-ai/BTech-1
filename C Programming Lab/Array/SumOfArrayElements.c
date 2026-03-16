#include <stdio.h>
void main(){
    int a[50],i,n,sum=0;
    printf("No of elements =");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("Sum=%d",sum);
}