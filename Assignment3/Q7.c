 /* 7. Write a program to check whether roots of a given quadratic equation are real &
distinct, real & equal or imaginary roots */

#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("enter the values of a.b and c ");
    scanf("%d %d %d",&a,&b,&c);
    d = b*b-4*a*c;
    if(d==0)
        printf("Roots are real & equal");
    else if(d>0)
        printf("Roots are real & distinct");
    else
        printf("Roots are imaginary");
}