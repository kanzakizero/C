#include <stdio.h>
int main()
{
    char arr [260] ={0};
    int j = 0;
    int i = 0;
    int boy = 0;
    int girl = 0;
    scanf("%255s", arr);
    for(i=0;arr[i]!='\0';i++)
    {
        if(arr[i] == 'b')
        {
            if(arr[i+1] == 'o')
            {
                if(arr[i+2] == 'y')
                {
                    boy++;
                    i+=2;
                }
                else
                {
                    boy++;
                    i+=1;
                }
            }
            else
            {
                boy++;
            }
        }
        else if(arr[i] == 'g')
        {
            if(arr[i+1] == 'i')
            {
                if(arr[i+2] == 'r')
                {
                    if(arr[i+3] == 'l')
                    {
                        girl++;
                        i+=3;
                    }
                    else
                    {
                        girl++;
                        i+=2;
                    }
                }
                else
                {
                    girl++;
                    i+=1;
                }
            }
            else
            {
                girl++;
            }
        }
        else if(arr[i] == 'o')
            {
                if(arr[i+1] == 'y')
                {
                    boy++;
                    i+=1;
                }
                else
                {
                    boy++;
                }
            }
       else if(arr[i] == 'y')
                {
                    boy++;
                }
        else if(arr[i] == 'i')
            {
                if(arr[i+1] == 'r')
                {
                    if(arr[i+2] == 'l')
                    {
                        girl++;
                        i+=2;
                    }
                    else
                    {
                        girl++;
                        i+=1;
                    }
                }
                else
                {
                    girl++;
                }
            }
        else if(arr[i] == 'r')
                {
                    if(arr[i+1] == 'l')
                    {
                        girl++;
                        i+=1;
                    }
                    else
                    {
                        girl++;
                    }
                }
       else if(arr[i] == 'l')
                    {
                        girl++;
                    }

    }
    printf("%d\n",boy);
    printf("%d",girl);
    return 0;
}
