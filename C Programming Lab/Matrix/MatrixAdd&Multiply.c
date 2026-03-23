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

void add_mat(int r1, int c1, int r2, int c2, int a[r1][c1],int b[r2][c2],int sum[r1][c1]){
    if(r1==r2 && c1==c2){
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                sum[i][j]=(a[i][j]+b[i][j]);
            }
        }
        print_mat(r1,c1,sum);
    }
    else{
        printf("Addition not possible");
    }
}

void mult_mat(int r1,int c1,int r2,int c2,int a[r1][c1],int b[r2][c2],int mult[r1][c2]){
    if(c1!=r2){
        printf("Multiplication not possible");
    }
    else{
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                mult[i][j]=0;
                for(int k=0;k<c1;k++){
                    mult[i][j]+=(a[i][k]*b[k][j]);
                }
            }
        }
        printf("Multiplication of Matrix-\n");
        print_mat(r1,c2,mult);
    }
}

int main(){
    int i,j,k,n,r1,r2,c1,c2;
    printf("Input rows and columns of First Matrix");
    scanf("%d%d",&r1,&c1);
    printf("Input rows and columns of Second Matrix");
    scanf("%d%d",&r2,&c2);
    int a[r1][c1],b[r2][c2],sum[r1][c1],mult[r1][c2];
    inp_mat(r1,c1,a);
    inp_mat(r2,c2,b);
    printf("Enter 1 for Addition\nEnter 2 for Multiplication\t");
    scanf("%d",&n);
    if(n==1){
        add_mat(r1,c1,r2,c2,a,b,sum);
    }
    else if (n==2){
        mult_mat(r1,c1,r2,c2,a,b,mult);
    }
    else{
        printf("Invalid Input");
    }
    return 0;
}