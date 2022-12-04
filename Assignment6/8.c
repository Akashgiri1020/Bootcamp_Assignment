// 8. Write a program to check whether a given number is a Prime number or not

#include<stdio.h>
#include<conio.h>
void main(){
    int N,i,Count=0;
    printf("enter a number: ");
    scanf("%d",&N);
    for ( i = 2; i < N/2; i++)
    {
        if(N%i==0){
            Count++;
        }
    }
    if(Count==0){
        printf("%d is Prime",N);
    }
    else{
        printf("Not Prime");
    }
}