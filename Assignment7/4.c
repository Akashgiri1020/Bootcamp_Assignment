// 4. Write a program to calculate HCF of two numbers

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main(){
    int N,M,i,HCF,range;

    printf("enter two numbers: ");
    scanf("%d %d",&M,&N);
    range=N>M?N:M;
    for(i=1 ; i<=range/2 ; i++){
        if((N % i == 0) && (M % i == 0)){
            HCF = i;
        }
    }
    printf("HCF of %d and %d is %d",N,M,HCF);
}