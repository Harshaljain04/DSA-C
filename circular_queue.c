#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int queue[MAX];
int r=-1, f=-1;
void enqueue();
void dequeue();
void display();
int main(){
    int ch;
    while(1)
    {
        printf("\n1: Enqueue\n2: Dequeue\n3: Display\n4: exit: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: enqueue();
            break;
            case 2: dequeue();
            break;
            case 3: display();
            break;
            case 4: exit(0);
            break;
            default:
        printf("\nWrong Choice");
        }
    }
    return 0;
}
void enqueue()
{
    if(f==0 && r==MAX-1 || f==r+1)
    printf("Overflow");
    else
    {
      r = (r+1) % MAX;
      scanf("%d",&queue[r]);
    }
}
void dequeue()
{
    if(f==-1)
    printf("Underflow");
    else if(f==r)
    {
      f=-1; r=-1;
    }
    else
    {
      f = (f+1) % MAX;
    }
}
void display()
{
   if(f==-1)
   printf("Underflow"); 
   else
   {
    for(int i=f; i!=r; i=(r+1) % MAX)
    printf("%d", queue[i]);
   }
   printf("\n");
}