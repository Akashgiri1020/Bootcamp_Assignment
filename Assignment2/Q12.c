/* 12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD. */

#include<stdio.h>

int main(){
    float amt,USD = 76.23;
    printf("enter amount in inr: ");
    scanf("%f",&amt);
    USD = USD*amt;
    printf("Price in USD: %.2f$",USD);
}