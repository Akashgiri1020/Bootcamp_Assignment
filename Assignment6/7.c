// 7. Write a program to count digits in a given number

#include<stdio.h>
#include<conio.h>
void main(){
    int N,i,count=0;
    printf("enter a nmuber: ");
    scanf("%d",&N);
    int M=N;
    while (N>0)
    {
        count++;
        N=N/10;
    }
    printf("Count of %d is %d",M,count);
}