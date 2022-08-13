// 6. WAP to print the name of the user in double quotes.
// Expected output format – “Hello , Amit Kumar”
#include<stdio.h>
#include<string.h>

int main(){
    char name[30];
    printf("enter your name: ");
    fgets(name,20,stdin);
    printf("\"Hello, %s\"",name);
    return 0;

}