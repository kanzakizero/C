#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d",&n);
    int i = 0;
    int m = 0;
    int num = 0;
    int arr[n];
    for (i = 0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(arr[i+1]<arr[i])
        {
            int j = i+1;
            for(j=i+1;j<n-1;j++)
            {
                if(arr[j+1]<arr[j])
                {
                    break;
                }
                if(arr[j+1]>arr[j])
                {
                    num += 1;
                    i = j;
                    break;
                }
            }
            
        }
    }
    printf("%d",num);


    
    return 0;
}