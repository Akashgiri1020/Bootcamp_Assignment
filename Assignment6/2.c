// 2. Write a program to calculate sum of first N even natural numbers

#include<stdio.h>
#include<conio.h>

void main(){
    int i=1,sum=0,N,count=1;
    printf("enter the count of even numbers:");
    scanf("%d",&N);
    while(count<=N){
        if(i%2 == 0){
            sum +=i;
            count++;
            
        }
        i++;
    }
    printf("Sum of even Natural Number is:%d",sum);
}
