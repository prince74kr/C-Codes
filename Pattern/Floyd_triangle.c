/*

1
2 3
4 5 6
7 8 9 10

*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter Number of Rows : ");
    scanf("%d", &num);
    int next = 1 ;
    for (int i = 1; i <= num; i++){
        for (int j = 1; j <= num ; j++)
        {   if(i>= j){
            printf("%d ",next++);}
        }
        printf("\n");
    }
    
}