// 1. Write a program to check whether a given number is positive or non-positive.

#include<stdio.h>

int main(){
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    if(num>=0)
        printf("Positive");
    else
        printf("Non-Positive");

}