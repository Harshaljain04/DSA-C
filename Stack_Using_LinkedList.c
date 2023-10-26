#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}stack;

stack *top, *temp;

void create_node();
void push();
void pop();
void peek();
void show();

int main()
{
    int choice;

    while (1)
    {
        printf("\nPerform operations on the stack:");
        printf("\n1.Push the element\n2.Pop the element\n3.Peek\n4.Show\n5.Exit");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);
        
        switch (choice)
        {
        case 1:
            {push();
            break;}
        case 2:
            {pop();
            break;}
        case 3:
            {peek();
            break;}
        case 4:
            {show();
            break;}
        case 5:
            exit(0);
        default:
            printf("\nInvalid choice!!");
        }
    }
}

void create_node()
{
    temp=(stack*)malloc(sizeof(stack));
    printf("Enter New Element :- ");
    scanf("%d",&temp->data);
    temp->next=NULL;
}

void push()
{
    create_node();
    if(top==NULL) top=temp;
    else
    {
        temp->next=top;
    }
    top=temp;
}

void pop()
{
    if(top==NULL) printf("UnderFlow!!!\n");
    else
    {
        temp=top;
        top=top->next;
        printf("%d is popped",temp->data);
        free(temp);
        temp=NULL;
    }
}

void peek()
{
    if(top==NULL) printf("UnderFlow!!!\n");
    else
    {
        printf("%d",top->data);
    }
}

void show()
{
    if(top==NULL) printf("UnderFlow!!!\n");
    else
    {
        temp=top;
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}