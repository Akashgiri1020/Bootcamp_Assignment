// 4. Write a program to calculate sum of squares of first N natural numbers

#include<stdio.h>
#include<conio.h>

void main(){
    int i,sum=0,N;
    printf("enter the range:");
    scanf("%d",&N);
    for ( i = 1; i <= N; i++)
    {

        sum+=(i*i);
    }
    printf("Sum of Squares of N Natural Number is:%d",sum);
}
