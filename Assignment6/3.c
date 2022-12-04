// 3. Write a program to calculate sum of first N odd natural numbers

#include<stdio.h>
#include<conio.h>

void main(){
    int i,sum=0,N;
    printf("enter the range:");
    scanf("%d",&N);
    for ( i = 1; i <= N; i++)
    {
        if(i%2!=0){
            sum+=i;
        }
    }
    printf("Sum of odd Natural Number is:%d",sum);
}