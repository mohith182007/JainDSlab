#include<stdio.h>
void main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a>0){
        printf("The number is positive.\n");
    }
    else if(a<0){
        printf("the number is negative");
    }
    else{
        printf("It is equal to zero");
    }
}