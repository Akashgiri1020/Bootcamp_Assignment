// 6. Write a program to print greater between two numbers. Print one number of both are the same.

#include<stdio.h>

int main(){
    int num1,num2;
    printf("enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
        printf("Greater is %d",num1);
    else if(num1<num2)
        printf("Greater is %d",num2);
    else
        printf("Both are same i.e %d",num1);
}