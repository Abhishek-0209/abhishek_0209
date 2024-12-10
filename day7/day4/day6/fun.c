#include<stdio.h>
// function dec
int sum(int a, int b);
int main(){
    int a=10,b=10,res;
    res=sum(a,b);
    printf("the sum of %d and %d is %d",a,b,res);
    res=sum(30,40);
    printf("the sum of %d 30 and 40 %d is \n",a,b,res);
    res=sum(50,50);
    printf("the sum of %d 50 and 50 %d is  \n",a,b,res);
    res=sum(100,60);
    printf("the sum of 100 and 60  %d is \n",res);
    return 0;
}

//function definition
int sum(int a, int b){   
    int res=a+b;
    return res;
}
