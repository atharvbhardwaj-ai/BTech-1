#include <stdio.h>
void main(){
    int n,i,j;
    printf("Enter n: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        int num=1;
        for (j=n;j>=i;j--){
            printf("%d",num);
            num++;
        }
        printf("\n");
    }
}