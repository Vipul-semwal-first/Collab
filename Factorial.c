#include <stdio.h>

int main ()
{
    int n ; 
    unsigned long long fact =1;
    printf(" Enter the value of n = ");
    scanf("%d" , &n);

    if(n<0) 
    {
        printf(" Value of n canout be in negative \n"); 
    }
    else if(n>20)
    {
        printf(" The value is too big after 20  \n");
    }
    else
    {
        for (int i = 1; i<=n ; i++)
        {
        fact =fact*i;
        }
        printf(" The factorial = %d\n" , fact);
    }
    return 0;
}