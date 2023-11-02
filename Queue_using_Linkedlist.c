#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}queue;
queue *front, *rear, *temp;
void create_node(){
    rear=(queue*)malloc(sizeof(queue));
    printf("Enter the values\n");
    scanf("%d",&rear->data);
    rear->next=NULL;
}
void enqueue(){
    create_node();
    if(front==NULL){
        front=rear;
    }
    else{
        temp->next=rear;
    }
    temp=rear;
    rear->next=NULL;
}
void dequeue(){
     if(front==NULL){
        printf("underflow\n");
    }
    else{
        temp=front;
        front=front->next;
        printf("%d",temp->data);
        free(temp);
        temp=NULL;
    }
}
void display(){
    if(front==NULL){
        printf("Underflow");
    }
    else{
        temp=front;
        while(temp!=NULL){
            printf("%d\n",temp->data);
            temp=temp->next;
        }
        // printf("NULL\n");
    }
}
int main()
{
    int choice,position;
    while (1) {
        printf("\n  QUEUE MENU:\n");
        printf("1. ENQUEUE\n");
        printf("2. DEQUEUE\n");
        printf("3. DISPLAY\n");
        printf("4. EXIT\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:exit(0);
            default:
                printf("Invalid choice \n");
        }
    }
    return 0;
}