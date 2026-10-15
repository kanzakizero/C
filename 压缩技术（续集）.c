#include <stdio.h>
#include <string.h>
int main()
{
    char grid[205][205];
    if(scanf("%s",grid[0])!=1 ) return 0;
    int N = strlen(grid[0]);
    int i = 0;
    int j = 0;
    char check = '0';
    for(i=1;i<=N-1;i++)
    {
        scanf("%s",grid[i]);
    }
    int answer = 0;
    printf("%d",N);
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(grid[i][j] == check)
            {
                answer++;
            }
            else
            {
                printf(" %d",answer);
                answer = 1;
                check = (check == '0') ? '1':'0';
            }
        }
    }
    printf(" %d\n", answer);











    
    return 0;
}