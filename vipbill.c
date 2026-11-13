#include<stdio.h>
int main(){
    int choice, quantity, total = 0, i, n;
    printf("\n********MENU********\n");
    printf("1. Pizza - Rs.100\n");
    printf("2. Burger - Rs.50\n");
    printf("3. Pasta - Rs.40\n");
    printf("4. Fries - Rs.35\n");
    printf("5. Salad - Rs.30\n");
    printf("6. Soda - Rs.25\n");
    printf("7. Water - Rs.15\n");
    printf("8. Ice Cream - Rs.20\n");
    printf("9. Exit\n");
    printf("************************\n");
    printf("Enter the number of dishes you want to order: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if(choice == 9){
            break;
        }
        printf("Enter quantity: ");
        scanf("%d", &quantity);
        switch(choice){
            case 1:
                total += 100 * quantity;
                break;
            case 2:
                total += 50 * quantity;
                break;
            case 3:
                total += 40 * quantity;
                break;
            case 4:
                total += 35 * quantity;
                break;
            case 5:
                total += 30 * quantity;
                break;
            case 6:
                total += 25 * quantity;
                break;
            case 7:
                total += 15 * quantity;
                break;
            case 8:
                total += 20 * quantity;
                break;
            default:
                printf("Invalid choice!\n");
        }
    }
    printf("Total amount to be paid: Rs.%d\n", total);
    return 0;
}