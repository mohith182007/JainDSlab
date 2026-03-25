#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mul(int a,int b){
return a*b;
}
float div(int a,int b){
    return a/b;
}
void main(){
    int a, b;
    printf("Enter two  numbers :");
    scanf("%d%d",&a,&b);
    printf("/nAddition is %d",add(a,b));
    printf("/nSubtraction is %d",sub(a,b));
    printf("/nMultiplication is %d",mul(a,b));
    printf("/nDivision is %d",div(a,b));


    


}