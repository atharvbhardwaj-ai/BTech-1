#include <stdio.h>
void main(){
    int n,i,sum=0;
    printf("Input the number: ");
    scanf("%d",&n);
    int temp=n;
    while (temp>0){
        i=temp%10;
        sum+=i;
        temp=temp/10;
    }
    printf("The sum of digits of %d is %d\n",n,sum);
}