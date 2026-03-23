#include <stdio.h>

void inp_mat(int r,int c,int a[r][c]){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("arr[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}

void print_mat(int r,int c,int a[r][c]){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int n,i,j,sum=0;
    printf("Enter order of matrix");
    scanf("%d",&n);
    int a[n][n];
    inp_mat(n,n,a);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j||(i+j==n-1)){
                sum+=a[i][j];
            }
        }
    }
    
    printf("Sum of Diagonal elements= %d\n",sum);
}