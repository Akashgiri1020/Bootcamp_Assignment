// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.

#include<stdio.h>

int main(){
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    if(num%7==0 && num%3==0)
        printf("divisible by both 3 and 7");
    else if(num%7==0){
        printf("divisible by 7");
    }
    else if(num%3==0)
        printf("divisible by 3");
    
    else{
        printf("not divisible by 3 and 7");
    }
    
    return 0;
    
}