#include<stdio.h>
int factorial(int N)
{
    if(N==1){
        return 1;
    }
    else{
        return (int)N*factorial(N-1);
    }
}
int main()
{
    int N,fact=1;
    printf("Enter number:");
    scanf("%d",&N);
    fact = (int)N*factorial(N-1);
    printf("factorial = %d",fact);
    return 0;
}   