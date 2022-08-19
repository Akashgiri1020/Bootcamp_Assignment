// 2. Write a program to check whether a given number is divisible by 5 or not

#include<stdio.h>
#include<conio.h>

int main(){
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    if(num%5 == 0)
        printf("true");
    else
        printf("false");
}