// 1. Write a program to calculate sum of first N natural numbers

#include<stdio.h>
#include<conio.h>

void main(){
    int i,sum=0,N;
    printf("Enter a number\n");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        sum+=i;
    }
    printf("Sum of N natural number is:%d",sum);
}


