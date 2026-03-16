#include<stdio.h>
#include<math.h>
void main(){
    int n,temp,rev=0,rem;
    printf("Input the number:");
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    printf("The reverse of the number is %d",rev);
}