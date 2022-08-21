// 3. Write a program to print the first 10 natural numbers in reverse order

#include<stdio.h>

int main(){
    int n;
    printf("enter the last natural number:");
    scanf("%d",&n);
    int i=n;
    while(i>=1){
        printf("%d\n",i);
        i--;
    }
    return 0;
}