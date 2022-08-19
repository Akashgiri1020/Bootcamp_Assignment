// 3. Write a program to swap values of two int variables

#include<stdio.h>

int main(){
    int a,b,temp;
    printf("enter two numbers\n");
    scanf("%d %d",&a,&b);
    printf("\nValues before swapping are a=%d and b=%d",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("\nValues after swapping are a=%d and b=%d",a,b);
}