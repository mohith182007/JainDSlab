#include<stdio.h>
void main(){
    int arr[9]={3,4,5,2,1,7,9,6,8},ele;
    printf("the array element at index 2 is %d\n",arr[1]);
    printf("the array element at index 4 is %d\n",arr[3]);
    printf("Enter the serach element from one to nine:");
    scanf("%d",&ele);
    for(int i=0;i<9;i++){
        if(arr[i]==ele){
            printf("Element %d found at index %d\n",ele,i+1);
        }
    }
}