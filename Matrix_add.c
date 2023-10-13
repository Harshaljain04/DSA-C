#include<stdio.h>
int main()
{
int a[3][3], b[3][3], c[3][3], i,j;
printf("Enter the value for 1st matrix\n");
    for(i=0; i<3; i++)
    {
    for(j=0; j<3; j++)
    {
printf("Value of [%d][%d] = \n",i,j);
scanf("%d",&a[i][j]);
    }

}
printf("Enter the value for 2nd matrix\n");
    for(i=0; i<3; i++)
    {
    for(j=0; j<3; j++)
    {
printf("Value of [%d][%d] = \n",i,j);
scanf("%d",&b[i][j]);
    }

}

    for(i=0; i<3; i++)
    {
    for(j=0; j<3; j++)
    {
c[i][j] = a[i][j] + b[i][j];
    }
    }

    for(i=0; i<3; i++)
    {
    for(j=0; j<3; j++)
    {
printf("%d\t", c[i][j]);
if (j==3-1)
{
    printf("\n\n");
}
    }
    }
return 0;
}    
