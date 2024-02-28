#include<stdio.h>



void Q3(){
    float k=0;
    for(k=0.5;k<3;k++){
        printf("I love C\n");
    }
}

void Q4(){
    int i=1;
    do{
        printf("while vs do-while\n");
    }while(i==1);
    printf("Oout of loop");
}

void Series(){
    int N,i;
    float sum=0.0;
    scanf("%d",&N);
    for (i = 1; i <= N; i++)
    {   sum=sum+1/(float)i;
        printf( "%.2f \n",sum);
    }
    printf("Sum of the series is: %.2f", sum);
}

void main(){
    //Q3();
    // Q4();
    Series();
}