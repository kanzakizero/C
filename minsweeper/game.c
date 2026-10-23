#include "game.h"
void InitBoard(char board[ROWS][COLS], int r, int c, char value)
{
    int i = 0;
    for(i=0;i<r;i++)
    {
        int j = 0;
        for(j=0;j<c;j++)
        {
            board[i][j] = value;
        }
    }
}

void displayboard(char board[ROWS][COLS], int r, int c)
{
    int i = 0;
    int j = 0;
    for(i=0;i<=c;i++)
    {
        if(i==0)
        {
            printf("  ");
        }
        else
        {
            printf("%d ",i);
        }
    }
    printf("\n");
    for(i=1;i<=r;i++)
    {
        printf("%d ",i);
        
        for(j=1;j<=c;j++)
        {
            printf("%c ",board[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

static int getminecount(char minefield[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
    int count = 0;
    int i = 0;
    for(i=x-1;i<=x+1;i++)
    {
        int j = 0;
        for(j=y-1;j<=y+1;j++)
        {
            if(i>=1 && i<=ROW && j>=1 && j<=COL)
            {
                if(minefield[i][j] == '1')
                {
                    count++;
                }
            }
        }
    }
    return count;
}

void setmine(char board[ROWS][COLS], int r, int c)
{
    int count = 10;
    while(count)
    {
        int x = rand()%r+1;
        int y = rand()%c+1;
        if(board[x][y] == '0')
        {
            board[x][y] = '1';
            count--;
        }
    }
}

void findmine(char minefield[ROWS][COLS], char show[ROWS][COLS], int r, int c)
{
    int x = 0;
    int y = 0;
    int win = 0;
    while(win < (r*c - 10))
    {
        printf("Enter the coordinates to reveal (row and column): ");
        scanf("%d %d", &x, &y);
        if(x >= 1 && x <= r && y >= 1 && y <= c)
        {
            if(show[x][y] != '*')
            {
                printf("You have already revealed this cell. Please try again.\n");
                continue;
            }
            if(minefield[x][y] == '1')
            {
                printf("You hit a mine at (%d, %d).\n Sorry, but that's the end", x, y);
                displayboard(minefield, r, c);
                break;
            }
            else
            {
                show[x][y] = '0';
                int count = getminecount(minefield, show, x, y);
                show[x][y] = count + '0';
                displayboard(show, r, c);
                win++;

            }
        }

        else
        {
            printf("Invalid coordinates. Please try again.\n");
        }
    }
    if(win == (r*c - 10))
    {
        printf("Congratulations! You have successfully cleared the minefield!\n");
        displayboard(minefield, r, c);
    }
}