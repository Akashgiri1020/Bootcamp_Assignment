// 6. Write a program to calculate factorial of a number

#include<stdio.h>
#include<conio.h>
void main(){
    int i,N,fact=1;
    printf("Enter the Number: ");
    scanf("%d",&N);
    for ( i = 1; i <= N; i++)
    {
        fact *= i;
    }
    printf("factorial of %d is %d",N,fact);
    
}