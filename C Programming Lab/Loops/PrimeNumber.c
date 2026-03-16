#include <stdio.h>
int main(){
    int n,i,isPrime=0;
    printf("Input the number\t");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){
            isPrime++;
        }
    }
    if(isPrime==0){
        printf("Number is prime");
    }
    else{
        printf("Number is not prime");
    }
    return 0;
}