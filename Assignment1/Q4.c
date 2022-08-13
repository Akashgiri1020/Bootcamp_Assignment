/* 4. WAP to find the area of the circle. Take radius of circle from user as input and print the
 result in below given format. */

#include<stdio.h>
#include<string.h>

int main()
{
    float r,area;
    printf("Enter the radius: ");
    scanf("%f",&r);
    area = 3.14*r*r;  //variable that store area
    printf("Area of circle is %f having the radius %f",area,r);
    printf("\n");
    return 0;
}
