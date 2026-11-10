#include <stdio.h>
 
int main()
{
    int choice, quantity;
    int total = 0;
 
    do
    {
        printf("\n****** RESTAURANT MENU ******\n");
        printf("1. Ice Cream  - Rs. 80\n");
        printf("2. Waffle     - Rs. 120\n");
        printf("3. Cake       - Rs. 150\n");
        printf("4. Pastries   - Rs. 60\n");
        printf("5. Cupcakes   - Rs. 100\n");
        printf("6. Cookies   - Rs. 170\n");
        printf("7. Pasta   - Rs. 220\n");
        printf("8. Noodles   - Rs. 200\n");
        printf("9. Beer   - Rs. 110\n");
        printf("10. Generate Bill & Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
 
        switch (choice)
        {
        case 1:
            printf("Enter quantity of Ice Cream: ");
            scanf("%d", &quantity);
            total = total+ 80 * quantity;
            printf("Added %d Ice Cream.\n", quantity);
            break;
 
        case 2:
            printf("Enter quantity of Waffle: ");
            scanf("%d", &quantity);
            total = total +120 * quantity;
            printf("Added %d Waffle.\n", quantity);
            break;
 
        case 3:
            printf("Enter quantity of Cake: ");
            scanf("%d", &quantity);
            total = total+ 150 * quantity;
            printf("Added %d Cake.\n", quantity);
            break;
 
        case 4:
            printf("Enter quantity of Pastries: ");
            scanf("%d", &quantity);
            total = total + 60 * quantity;
            printf("Added %d Pastries.\n", quantity);
            break;

         case 5:
            printf("Enter quantity of Cupcakes: ");
            scanf("%d", &quantity);
            total = total + 100 * quantity;
            printf("Added %d Cupcakes.\n", quantity);
            break;

         case 6:
            printf("Enter quantity of Cookies : ");
            scanf("%d", &quantity);
            total = total + 170 * quantity;
            printf("Added %d Cookies.\n", quantity);
            break;

         case 7:
            printf("Enter quantity of  Pasta: ");
            scanf("%d", &quantity);
            total = total + 220 * quantity;
            printf("Added %d Pasta.\n", quantity);
            break;

        case 8:
            printf("Enter quantity of Noodles: ");
            scanf("%d", &quantity);
            total = total + 200 * quantity;
            printf("Added %d Noodles.\n", quantity);
            break;

         case 9:
            printf("Enter quantity of Toast: ");
            scanf("%d", &quantity);
            total = total + 110 * quantity;
            printf("Added %d Toast.\n", quantity);
            break;
 
        case 10:
            printf("\n---------------------------\n");
            printf("Total Bill: Rs. %d\n", total);
            printf("Thank you! Visit again.\n");
            break;
 
        default:
            printf("Invalid choice! Please select 1-10.\n");
        }
 
    } while (choice != 10);
 
    return 0;
}
 