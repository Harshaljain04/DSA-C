#include<stdio.h>
void tower(int n, char beg, char aux, char end)
{
    if(n<=0)
    printf("\nillegal entry");
    else if(n==1)
    printf("\nmove disc from %c to %c", beg, end);
    else
    {
        tower(n-1, beg, end, aux);
        tower(n-1, beg, end, aux);
        tower(n-1, beg, end, aux);
    }
}

int main()
{
    int n;
    char a, b, c;
    printf("Enter the number of disc");
    scanf("%d", &n);
    printf("Tower Of Hanoi of %d disc\n", n);
    tower(n, 'a', 'b', 'c');
}
