#include <stdio.h>

int main ()
{
    int choice ;
    float num1 , num2 , result;

    printf("********MENU******** \n");
     printf("1) Add \n");
      printf("2) Subtract \n");
       printf("3) Divide \n");
        printf("4) Multiply \n");
         printf("5) Exit \n");
    

         printf("Enter the choice = ");
         scanf("%d" , &choice);
         
          while(choice>=5)
         {
            return -1;
            break;
         }

         printf("Enter the number 1 =  ");
         scanf("%f" , &num1);
         printf("Enter the number 2 =  ");
         scanf("%f" , &num2);

         switch(choice)
         {
            case 1:
            result = num1+num2;
            printf(" The Result is = %0.0f" , result);
            break;

            case 2:
            result = num1 - num2;
            printf(" The result is = %0.0f" , result);
            break;

            case 3:
            if(num2==0)
            {
                printf(" 0 can't be multiplied");
                break;
            }

            result = num1 * num2;
            printf(" The result is = %0.0f", result);
            break;

            case 4 :
            if(num2==0)
            {
                printf(" The denominator should not be 0");
                break;
            }
            else
            {
                result = num1/num2;
                printf(" The result is = %0.2f" , result);
                break;
            }

         }
    
}