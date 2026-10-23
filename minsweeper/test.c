#include <stdio.h>
void menu()
{
    printf("1. Start Game\n");
    printf("0. Exit\n");
    printf("Please select an option: ");
    
}

game()
{

}
int main()
{
    int choice;
    printf("Welcome to Minesweeper!\n");
    do{
        menu();
    
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            game();
            break;
        case 0:
            printf("Exiting the game. Goodbye!\n");
            exit(0);
            break;
        default:
            printf("Invalid option. Please try again.\n");
            break;
    }
    }while(choice);


    return 0;
}