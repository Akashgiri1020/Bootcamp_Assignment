// 4. Write a program to swap values of two int variables without using a third variable.

#include<stdio.h>
int main(){
    int a,b;
    printf("enter two numbers\n");
    scanf("%d %d",&a,&b);
    printf("\nValues before swapping are a=%d and b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nValues after swapping are a=%d and b=%d",a,b);
    return 0;
}