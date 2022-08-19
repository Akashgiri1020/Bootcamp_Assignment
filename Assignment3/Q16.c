// 16. Write a program to check whether a given character is an alphabet (uppercase), an
// alphabet (lower case), a digit or a special character.
#include <stdio.h>
#include <conio.h>

int main()
{
    char a;
    a=getch();
    if (a>=65 && a<=90)
        printf("the alphabet is in uppercase ");
    else if(a>=97 && a<=122)
        printf("the alphabet is in lowecase ");
    else if(a>=48 && a<=57)
    printf("the charactor is a digit");
    else
    printf("the charactor is a special charactor");
    return 0;
}