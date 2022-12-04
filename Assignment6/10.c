// 10. Write a program to reverse a given number

#include<stdio.h>
#include<conio.h>
void main(){
    int N,i,R=0,Rem;
    printf("enter a number: ");
    scanf("%d",&N);
    while(N>0){
        Rem = N%10;
        R = R*10+Rem;
        N=N/10;
    }
    printf("The reverse of given number is %d",R);
}
