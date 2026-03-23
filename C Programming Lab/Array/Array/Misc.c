#include <stdio.h>

int rev_num(int a){
    int rem,temp,rev=0;
    temp=a;
    
    while(temp>0){
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    a=rev;
    return a;
}

void inputarr(int a[],int n){
    for(int i=0;i<n;i++){
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
}

void printarr(int a[],int n){
    for(int i=0;i<n;i++){
        printf("a[%d]= %d\n",i,a[i]);
    }
}

void maxarr(int a[],int n){
    int max=a[0];
    for(int i=1;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    printf("Max Element= %d",max);
}

void minarr(int a[],int n){
    int min=a[0];
    for(int i=1;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    printf("Min Element= %d",min);
}

void revarr(int a[],int n){
    int beg=0;
    int end=n-1;
    while(beg<end){
        int temp=a[beg];
        a[beg]=a[end];
        a[end]=temp;
        beg++;
        end--;
    }
}

void binary_search(int a[],int n){
    int key,beg,mid,end;
    beg=0; 
    end=n-1;

    printf("Enter Key element");
    scanf("%d",&key);

    while(end>=beg){
        mid=(beg+end)/2;
        if(a[mid]==key){
            printf("Key found at %d",mid);
            break;
        }
        else if(a[mid]>key){
            end=mid-1;
        }
        else {
            beg=mid+1;
        }
    }

    if (beg>end){
        printf("Key not found");
    }
}

void bubble_sort(int a[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

void main(){
    int a[50],n,rev[50];
    printf("Enter number of elements");
    scanf("%d",&n);

    inputarr(a,n);
    revarr(a,n);
    printf("The Reversed Array is- \n");
    printarr(a,n);
}