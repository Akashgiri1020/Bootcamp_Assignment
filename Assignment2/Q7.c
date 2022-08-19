// 7. Write a program to find the position of first 1 in LSB.

#include<stdio.h>

int main(){
    int b = 9;
    int result = 0,count=0;
    result = b&1;
    if(result==1)
        printf("%d",count);
    else
        b=b>>1;
        
    
}