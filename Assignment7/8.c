// 8. Write a program to find next Prime number of a given number

#include<stdio.h>
#include<conio.h>

void main(){
    int N,flag=0;
    printf("enter the prime number: ");
    scanf("%d",&N);
    for(int i=N+1;i<=2*N;i++){
        for(int j=2;j<=i/2 && (i != N);j++){
            if((i%j == 0)){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("Next prime Number is: %d",i);
            break;
        }
        else{
            flag=0;
        }
    }
}