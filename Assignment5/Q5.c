// 5. Write a program to print the first N odd natural numbers in reverse order.

#include<stdio.h>

int main(){
    int n,count=0;
    printf("enter a number: ");
    scanf("%d",&n);
    for(int i=n*2;i>=1;i--){
        if(i%2!=0){
            printf("%d\n",i);
        }
    }
    return 0;
}
