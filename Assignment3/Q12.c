// 12. Write a program to check whether a given alphabet is in uppercase or lowercase.

#include<stdio.h>

int main(){
    char alpha;
    printf("enter an alphabet: ");
    scanf("%c",&alpha);
    if(alpha>=65 && alpha<=90){
        printf("Uppercase");
    }
    else if(alpha>=97 && alpha<=122){
        printf("Lowecase");
    }
    else
        printf("invalid! Not a alphabet");
}