/* 11. Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed. */

#include<stdio.h>

int main()
{
    int math,science,SST,english,hindi,count=0;
    printf("Enter the marks of the student\n");
    scanf("%d%d%d%d%d",&math,&science,&SST,&english,&hindi);
    if(math<33)
    count++;
    if(science<33)
    count++;
    if(SST<33)
    count++;
    if(english<33)
    count++;
    if(hindi<33)
    count++;
    if(count==1)
    printf("the student has compartment in one subject");
    if(count==0)
    printf("the student is passed in the examination");
    if(count>=2)
    printf("the student is failed in the examination");
    return 0;
}