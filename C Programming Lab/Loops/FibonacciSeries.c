#include <stdio.h>
int main(){
    int a=0,b=1,i,n;
    printf("Input the term till which the series runs");
    scanf("%d",&n);
    printf("%d\n%d\n",a,b);
    for(i=3;i<=n;i++){
        int c = a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
    return 0;
}