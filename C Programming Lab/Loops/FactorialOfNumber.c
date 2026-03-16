#include <stdio.h>
int main(){
    int i,n,fac=1;
    printf("Input the number\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    fac=fac*i;
    printf("The factorial of %d is %d\n",n,fac);
    return 0;
}