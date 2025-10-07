#include<stdio.h>

// Fibonacci series
 
int fibo(int n){
    if (n == 0 ){
        return 0 ;
    }
    else if ( n == 1){
        return 1 ;
    }
    int fibnm2=fibo(n-2);
    int fibnm1=fibo(n-1);
    int fibN= fibnm1+fibnm2;
    return fibN ;

}

int main(){
    int num ;
    printf("Enter number : ");
    scanf("%d",&num);
    printf("Fibonacci is %d",fibo(num));
}