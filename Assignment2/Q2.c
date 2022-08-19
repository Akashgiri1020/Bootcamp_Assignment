// 2. Write a program to print a given number without its last digit.

#include<stdio.h>

int main(){
    int n;
    printf("enter a number\n");
    scanf("%d",&n);

    printf("Number without its last digit is %d",n/10);
    return 0;
}