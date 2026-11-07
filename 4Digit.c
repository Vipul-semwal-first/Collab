#include <stdio.h>

int main()
{
    int n ;
    int num1;
    int result = 0 ;
    printf(" Enter the value of n = ");
    scanf("%d" , &n);

    if(n>=1000 && n<=9999)
    {
    while ( n != 0 ){
    
        num1 = n%10;
        result = result + num1;
        n = n/10;
    }
    printf(" The result = %d\n " ,  result );  
}

    else
    {
        printf(" Invalid Input");
    }
    
    return 0 ;
}
