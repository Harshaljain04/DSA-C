#include <stdio.h>
#include <stdlib.h>
#include <process.h>

// Define the structure for a node in the linked list
typedef struct Node {
    int data;
    struct Node* next;
} node;

node* start = NULL, *rear;

void create_list() 
{
    node* temp = (node*)malloc(sizeof(node));
    if (temp == NULL) 
    {
        printf("Memory allocation failed\n");
        return;
    }

    printf("Enter a new value: ");
    scanf("%d", &temp->data);
    temp->next = NULL;

    if (start == NULL) 
    {
        start = temp;
    } 
    else 
    {
        rear->next=temp;
    }
        rear=temp;
}

void node_double(int x)
{
    node* beg = start;
    while(beg!=NULL)
    {
        if(beg->data==x)
        {
            beg->data *= 2;
            return;
        }
        beg=beg->next;
    }
    printf("Value not found");
}


void display()
{
    if (start == NULL) {
        printf("Underflow!!\n");
    } else {
        node* temp = start;
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
        printf("1. Create List\n");
        printf("1. Double Node Value\n");
        printf("3. Display List\n");
        printf("4. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                create_list();
                break;
            case 2:
                {
                printf("Enter the value to double : ");
                scanf("%d",&x);
                node_double(x);
                break;
                }
            case 3:
                {
                printf("Linked List:\n");
                display();
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