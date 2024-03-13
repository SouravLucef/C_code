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
void P1()
{

    int i, n, largest;
    int arr[100];

    scanf("%d", &n); /*Accepts total number of elements from the test data */

    for (i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]); /* Accepts the array element from test data */
    }
    largest = arr[0];

    for (i = 0; i < n; i++)
    {
        if ( arr[i]>=largest)
        {
            largest = arr[i];
        }
    }
    printf("Largest element=%d", largest);
}

void main(){
    // mAtrix();
    //Q_10();
    P1();
}