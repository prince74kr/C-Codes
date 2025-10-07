#include<stdio.h>
int main(){
    int num ;
    printf("Enter number : ");
    scanf("%d",&num);
    int fact=1;
    if (fact == 0 ){
        printf("Factorial of 0 is 1");
    }
    for (int i=1 ; i <= num ; i++){
        fact=fact*i;
    }
    printf("Factorial of %d is %d ", num , fact );
}