//BIT MANIPULATION

#include <stdio.h>
int main()
{
    int n,x,shift;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Enter the position of the bit to manipulate: ");
    scanf("%d", &shift);
    x=1<<(shift-1);
    printf("%d",n|x);

}