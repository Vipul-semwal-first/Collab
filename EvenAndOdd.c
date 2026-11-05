#include<stdio.h>

int main()
{
    int n , sum , ssum;
    int evensum = 0 ;
    int oddsum = 0;
    
    printf(" Enter the value of n = ");
    scanf("%d" , &n);

    for (int i = 1 ; i <= n ; i++)
    {
        if(i%2==0)
        {
            evensum = evensum +i;
        }
        else
        {
            oddsum = oddsum +i;
        }
    }
        sum = evensum;
        printf(" The total sum of all even number = %d\n" ,sum);

        ssum = oddsum;
        printf(" The total sum of all even number = %d\n" ,ssum);
    
    return 0;
}