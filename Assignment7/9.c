// 9. Write a program to check whether a given number is an Armstrong number or not

#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int N,rem,newNumber=0,count=0;
    printf("enter a number: ");
    scanf("%d",&N);
    int M=N;
    int O=N;
    while(O != 0){
        O = O/10;
        ++count;
    }
    while(M>0){
        rem=M%10;
        newNumber = newNumber + pow(rem,count);
        M = M/10;
    }
    
    if(newNumber == N){
        printf("Given number is armstrong");
    }
    else{
        printf("Given number is not a armstrong number");
    }
    
}