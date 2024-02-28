#include<stdio.h>
void assP4(){
      int a=1;
    if(a--)
    printf("True\n");
    if(++a)
    {
     printf("False\n");   
    }
}

void assP7(){
    int a=5,b=10;
    printf("%d\n",a+=a<=b);
}

void assP8(){
    int x=5,y=3;
    printf("%d\n",x>y?x++:y++);
}

void assp9(){
    int a=10;
    while(a-- >10){
        printf("%d\n",a);
    }
}
void assP10(){
    int x=1,y=2;
    printf("%d\n",x<y?x:y,x>y?y:x);
}

void main(){
    // assP4();
    // assP7();
    // assP8();
    // assp9();
    assP10();
}