// printing star pattern
/*

   *
  ***
 *****

 */

#include <stdio.h>
int main()
{
    int num;
    printf("Enter Number of Rows : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= 2 * num-1; j++)
        {
            if (j > num - i && j < num + i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}