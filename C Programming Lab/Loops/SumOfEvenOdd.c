#include <stdio.h>
int main(){
    int n,i,sumEven,sumOdd;
    printf("Input the number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            sumEven+=i;
        }
        else
            sumOdd+=i;
    }
    printf("The sum of even numbers is %d\n",sumEven);
    printf("The sum of Odd numbers is %d\n",sumOdd);
    return 0;
}