// Complexity is n^n

#include <stdio.h>
int main()
{
    int arr[50], i, j, n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                break;
            }
        }
        if(j==n)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}