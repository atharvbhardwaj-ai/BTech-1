#include <stdio.h>
void main(){
    int n,j,i;
    printf("Enter n");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for(j=n;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }
}