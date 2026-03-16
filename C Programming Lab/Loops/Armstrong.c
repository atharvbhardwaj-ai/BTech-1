#include<stdio.h>
#include<math.h>
void main(){
    int n,arm=0,count=0;
    printf("Input the number:");
    scanf("%d",&n);
    int temp=n;
    while (temp>0){
        temp/=10;
        count++;
    }
    temp=n;
    while (temp>0){
        int r=temp%10;
        arm=pow(r,count)+arm;
        temp/=10;
    }
    if(arm==n){
        printf("Number is Armstrong\n");
    }
    else{
        printf("Number is not Armstrong\n");
    }    
}