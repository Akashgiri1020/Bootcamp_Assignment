// 5. Write a program to check whether a given number is a three-digit number or not.

#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    if(num/100>=1 && num/100<=9)
    printf("this is a three digit number\n");
    else
    printf("this is not a three digit number\n");
    return 0;
}