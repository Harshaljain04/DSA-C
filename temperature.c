#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter temperature in F: \n");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("The temperature in C is: %f",c);
    return 0;
}