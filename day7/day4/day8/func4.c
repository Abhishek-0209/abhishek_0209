#include<stdio.h>
int main(){
    int arr[10]={10,20,30,40,50};
    int equal = arr[0]; //10

    for(int i=0;i<5;i++){
        if(arr[i]=equal){
            equal=arr[i];
        }
    }
    printf("The equal element is %d",equal);
    return 0;
}