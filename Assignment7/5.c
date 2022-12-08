// 5. Write a program to check whether two given numbers are co-prime numbers or not

#include<stdio.h>
#include<conio.h>

void main(){
    int N,M,i,count=0,range;

    printf("enter two numbers: ");
    scanf("%d %d",&M,&N);
    range=N>M?N:M;
    for(i=1 ; i<=range/2 ; i++){
        if((N % i == 0) && (M % i == 0)){
            count++;
        }
    }
    if(count==1){
        printf("%d and %d are co prime",N,M);
    }
    else{
        printf("%d and %d are not co-prime",N,M);
    }
   
}