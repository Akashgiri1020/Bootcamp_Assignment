// Write a program to print first N terms of Fibonacci series

#include<stdio.h>
#include<conio.h>
void main(){
    int N,i,t1=0,t2=1,temp;
    printf("Enter the number of terms: ");
    scanf("%d",&N);
    printf("%d\n",t1);
    for(i=2;i<=N;i++){
        temp=t1;
        t1=t2;
        
        printf("%d\n",t2);
        t2=t1+temp;

    }
}