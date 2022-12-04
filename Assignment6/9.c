// 9. Write a program to calculate LCM of two numbers

#include<stdio.h>
#include<conio.h>
void main(){
    int N,M,i,LCM,max;
    printf("enter the numbers: ");
    scanf("%d %d",&N,&M);
    max= M>N?M:N;
    while(1){
        if((max%N==0) && (max%M==0)){
            printf("LCM of %d and %d is %d",M,N,max);
            break;
        }
        ++max;
    }
}