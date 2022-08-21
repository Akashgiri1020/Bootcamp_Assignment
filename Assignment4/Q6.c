// 6. Write a program to print the first 10 even natural numbers

int main(){
    int n=10;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
    return 0;
}