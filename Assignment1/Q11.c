/* 11. WAP to take time as an input in below given format and convert the time format and 
display the result as given below.
User Input date format – “HH:MM”
Output format – “HH hour and MM Minute”
Example –
“11:25” converted to “11 Hour and 25 Minute”
*/
#include<stdio.h>
int main(){
    int HH,MM;
    printf("enter the time in HH:MM: ");
    scanf("%d %d",&HH,&MM);
    printf("%d Hour and %d Minute",HH,MM);
}

/* 12. Find output of below code:
int main()
{ 
int x = printf(“ineuron”);
printf(“%d”,x);
return 0;
}
answer ---->>>> ineuron9
*/
