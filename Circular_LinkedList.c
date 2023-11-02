#include <stdio.h>
#include <stdlib.h>
#include <process.h>

typedef struct Node {
    int data;
    struct Node* next;
} linknode;

linknode* start, *rear, *temp;
int count=0;

void create_node()
{
    temp=(linknode*)malloc(sizeof(linknode));
    printf("Enter New Element :- ");
    scanf("%d",&temp->data);
    temp->next=NULL;
}

void insertFirst()
{
    create_node();
    count++;
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        temp->next=start;
    }
    rear=temp;
}

void insertLast()
{
    create_node();
    count++;
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
        rear->next=temp;
    }
    rear=temp;
}

void insertMid()
{
    int x;
    scanf("%d",&x);
    if(x>=1 && x<=count+1)
    {
        if(x==1) insertFirst();
        else if(x==count+1) insertLast();
        else
        {
            create_node();
            count++;
            linknode *z;
            z=start;
            for(int i=1;i<x;i++)
            {
                z=z->next;
                temp->next=z->next;
                z->next=temp;
            }
        }
    }
}

void display()
{
    if (start == NULL) {
        printf("Underflow!!\n");
    } else {
        linknode* temp = start;
        while (temp != NULL)
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
    }
}

int main() {
    int choice,x;
    while (1) {
        printf("\nLinked List Menu:\n");
        printf("1. Insert at First\n");
        printf("1. Insert at Last\n");
        printf("3. Insert in Middle\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertFirst();
                break;
            case 2:
                {
                insertLast();
                break;
                }
            case 3:
                {
                insertMid();
                break;
                }
            case 4:
                exit(0);
            default:
                printf("Invalid choice \n");
        }
    }
    return 0;
}