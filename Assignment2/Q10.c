// 10. Write a program to make the last digit of a number stored in a variable as zero.
#include<stdio.h>

int main(){
    int number,rem;
    printf("enter a number: ");
    scanf("%d",&number);

    number = number/10;
    number = number*10;
    printf("Number after performing operation is: %d",number);

    

}