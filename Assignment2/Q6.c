// 6. Write a program which takes a character as an input and displays its ASCII code.

#include<stdio.h>

int main(){
    char alpha;

    printf("enter a character");
    scanf("%c",&alpha);

    printf("The ASCII value for %c is %d",alpha,alpha);
}