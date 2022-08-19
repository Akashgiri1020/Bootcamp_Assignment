// 5. Write a program to input a three-digit number and display the sum of the digits.

#include<stdio.h>

int main(){
    int number, sum = 0,rem;
    printf("enter a 3 digit number: ");
    scanf("%d",&number);

    // we have to apply modulus operator three times to extract digits from numbers ---->>
    // also we have to apply division operator in between modulo operator to remove last digit from the number ......

    rem = number%10;
    number = number/10;
    sum = sum+rem;

    rem = number%10;
    number = number/10;
    sum = sum+rem;

    rem = number%10;
    number = number/10;
    sum = sum+rem;

    printf("sum of 3 digit number is %d",sum);
    }