// 11. Write a program to input a number from the user and also input a digit. Append a
// digit in the number and print the resulting number.
#include<stdio.h>

int main(){
    int num,digit;
    printf("enter a number and a digit(0 to 9): ");
    scanf("%d %d",&num,&digit);
    digit = digit%10;
    num = num*10+digit;
    printf("Number after append digit in it: %d",num);

}