#include <stdio.h>
void main(){
    int a[50],n,i;
    printf("Enter number of elements ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    int max=a[0],min=a[0];
    for (i=1;i<n;i++){
        if (a[i]>max){
            max=a[i];
        }
        else if(a[i]<min){
            min=a[i];
        }
    }
    printf("Max element = %d\n",max);
    printf("Min element = %d\n",min);
}