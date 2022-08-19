/* 10. Write a program which takes the cost price and selling price of a product from the
user. Now calculate and print profit or loss percentage. */

#include<stdio.h>

int main(){
    int cp,sp;
    float result,profit,loss;
    printf("enter cp and sp of product: ");
    scanf("%d %d",&cp,&sp);
    result = sp-cp;
    if(result>0){
        profit = (result/cp)*100;
        printf("Profit %% is given by %.2f",profit);
    }
    else{
        loss = ((result*(-1))/cp)*100;
        printf("Loss %% is given by %.2f",loss);
    }
}