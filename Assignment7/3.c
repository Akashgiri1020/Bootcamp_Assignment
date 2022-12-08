// 3. Write a program to check whether a given number is there in the Fibonacci series or not.

#include<stdio.h>
#include<conio.h>
void main(){
    int a = 0;
    int b = 1;
    int n;
    scanf("%d",&n);
    if (n==a || n==b) 
        printf("true");
        int c = a+b;
        while(c<=n)
        {
            if(c == n) 
                printf("true");
            a = b;
            b = c;
            c = a + b;
        }
        
}