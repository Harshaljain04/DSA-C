#include <stdio.h>
    
int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        int flag=0,sum=0;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int j=0;j<n;j++)
        {  for(int k=0;k<n-1;k++)
            
            {    if(a[k]>a[k+1])
                {
                int t;
                t=a[k];
                a[k]=a[k+1];
                a[k+1]=t;
                }
                
            }
        }
        for(int j=0;j<n;j++)
        {
            if(a[j]<=j+1 && j<n)
            {
                sum+=(j+1)-a[j];
            }
            else
            {
                printf("-1\n");
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
        printf("%d\n",sum);
        }
    }
	// your code goes here
	return 0;
}