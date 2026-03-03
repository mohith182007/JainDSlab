#include<stdio.h>
void main(){
int marks;
printf("enter the marks:");
scanf("%d",&marks);
if(marks>=90){
printf("grade is O");
}
else if(marks>=80){
printf("grade is A+");
}
else if(marks>=70){
printf("grade is A");   
}
else if(marks>=60){
printf("grade is B+");   
}
else if(marks>=50){
printf("grade is B");      
}
else if(marks>=40){
printf("grade is C");}
else {
    printf("grade is F");
}


}