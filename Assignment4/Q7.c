// 7. Write a program to print the first 10 even natural numbers in reverse order

int main(){
    int n=10;
    for(int i=n;i>=1;i--){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
    return 0;
}