#include<stdio.h>
int main(){
    int choice, quantity, total = 0, i, n;
    printf("\n********MENU********\n");
    printf("1. Pizza - Rs.10\n");
    printf("2. Burger - Rs.5\n");
    printf("3. Pasta - Rs.7\n");
    printf("4. Fries - Rs.3\n");
    printf("5. Salad - Rs.4\n");
    printf("6. Soda - Rs.2\n");
    printf("7. Water - Rs.1\n");
    printf("8. Exit\n");
    printf("************************\n");
    printf("Enter the number of dishes you want to order: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if(choice == 8){
            break;
        }
        printf("Enter quantity: ");
        scanf("%d", &quantity);
        switch(choice){
            case 1:
                total += 10 * quantity;
                break;
            case 2:
                total += 5 * quantity;
                break;
            case 3:
                total += 7 * quantity;
                break;
            case 4:
                total += 3 * quantity;
                break;
            case 5:
                total += 4 * quantity;
                break;
            case 6:
                total += 2 * quantity;
                break;
            case 7:
                total += 1 * quantity;
                break;
            default:
                printf("Invalid choice!\n");
        }
    }
    printf("Total amount to be paid: Rs.%d\n", total);
    return 0;
}