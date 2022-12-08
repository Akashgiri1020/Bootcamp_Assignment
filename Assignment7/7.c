// 7. Write a program to print all Prime numbers between two given numbers

#include<stdio.h>
#include<conio.h>
void main(){
    int flag = 0,N,M;
    printf("enter the range N to M : ");
    scanf("%d %d",&N,&M);
    for( int i=N ; i<M ; i++){
        
        for(int j=2 ; j<=i/2 ; j++){
            if(i%j == 0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%d\n",i);
        }
        else{
            flag=0;
        }
    }
}