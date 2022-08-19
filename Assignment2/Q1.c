// 1. Write a program to print unit digit of a given number

#include<stdio.h>
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    printf("Unit digit of Given number is %d",n%10);
    return 0;
}