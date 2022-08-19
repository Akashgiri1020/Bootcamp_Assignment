// 17. Write a program which takes the length of the sides of a triangle as an input. Display
// whether the triangle is valid or not.

#include <stdio.h>

int main()
{   
    int l1,l2,l3;
    printf("enter the length of the sides of a triangle\n");
    scanf("%d%d%d",&l1,&l2,&l3);
    if((l1+l2)>l3 && (l2+l3)>l1 && (l3+l1)>l2)
    printf("this is a valid triangle");
    else
    printf("this is not a valid triangle");
    
    return 0;
}