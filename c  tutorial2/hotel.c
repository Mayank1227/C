Hotel 
#include <stdio.h>

int main() {
    int choice;

    printf("Welcome to the Hotel Menu!\n");
    printf("1. Breakfast\n");
    printf("2. Lunch\n");
    printf("3. Dinner\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            {
                int breakfastChoice;

                printf("Breakfast Menu:\n");
                printf("1. Continental Breakfast\n");
                printf("2. American Breakfast\n");
                printf("Enter your choice (1-2): ");
                scanf("%d", &breakfastChoice);

                switch (breakfastChoice) {
                    case 1:
                        printf("You have selected Continental Breakfast.\n");
                        // Add your code for handling Continental Breakfast here
                        break;
                    case 2:
                        printf("You have selected American Breakfast.\n");
                        // Add your code for handling American Breakfast here
                        break;
                    default:
                        printf("Invalid choice for Breakfast.\n");
                        break;
                }
            }
            break;
        case 2:
            {
                int lunchChoice;

                printf("Lunch Menu:\n");
                printf("1. Salad\n");
                printf("2. Sandwich\n");
                printf("Enter your choice (1-2): ");
                scanf("%d", &lunchChoice);

                switch (lunchChoice) {
                    case 1:
                        printf("You have selected Salad for Lunch.\n");
                        // Add your code for handling Salad here
                        break;
                    case 2:
                        printf("You have selected Sandwich for Lunch.\n");
                        // Add your code for handling Sandwich here
                        break;
                    default:
                        printf("Invalid choice for Lunch.\n");
                        break;
                }
            }
            break;
        case 3:
            {
                int dinnerChoice;

                printf("Dinner Menu:\n");
                printf("1. Soup\n");
                printf("2. Steak\n");
                printf("Enter your choice (1-2): ");
                scanf("%d", &dinnerChoice);

                switch (dinnerChoice) {
                    case 1:
                        printf("You have selected Soup for Dinner.\n");
                        // Add your code for handling Soup here
                        break;
                    case 2:
                        printf("You have selected Steak for Dinner.\n");
                        // Add your code for handling Steak here
                        break;
                    default:
                        printf("Invalid choice for Dinner.\n");
                        break;
                }
            }
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}

