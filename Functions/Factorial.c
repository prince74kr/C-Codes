#include<stdio.h>

int factorial(int n ){
    if (n == 0 || n== 1){
        return 1 ;
    }
    int factNm1=factorial(n-1);
    int factN= factorial(n-1)*n;
    return factN ;
}

int main(){
    int num ;
    printf("Enter number : ");
    scanf("%d",&num);
    printf("Factorial of %d = %d ",num , factorial(num));
}