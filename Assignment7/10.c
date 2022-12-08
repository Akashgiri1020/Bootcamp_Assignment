// 10. Write a program to print all Armstrong numbers under 1000

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
    int temp1,temp2,rem,count = 0,newNumber=0;
    
    
    for(int i=0;i<=1000;i++){
        temp1=i;
        temp2=i;
        count=0;
        newNumber=0;
        while(temp1!=0){
            temp1 = temp1/10;
            ++count;
        }
        while(temp2!=0){
            rem=temp2 % 10;
            newNumber = newNumber + pow(rem,count);
            temp2 = temp2/10;
        }
        
        if(newNumber == i){
            printf("%d\n",newNumber);
        }
        
    }
}