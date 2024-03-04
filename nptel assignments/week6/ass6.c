#include<stdio.h>

void mAtrix(){
    int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

    printf("%d", matrix[0][2]);  
}

void Q_10(){
    int arr[]={1,2,3,4,5,6};
    int i,j,k;
    j=++arr[2];
    k=arr[1]++;
    i=arr[j++];
    printf("i=%d,j=%d,k=%d",i,j,k);

}


void main(){
    // mAtrix();
    Q_10();
}