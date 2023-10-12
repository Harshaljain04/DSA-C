#include <stdio.h>

int front=-1;
int rear=-1;
int queue[5];

void dequeue() {
    if (front ==-1) {
        printf("Underflow\n");
    } else if (front == rear) {
        front=rear= -1;
    } else {
        front =(front + 1) % 5;
    }
}

void enqueue(int a) {
    if ((front == 0 && rear == 4)||(rear + 1)==front) {
        printf("Queue is full\n");
    } else {
        if (front==-1) {
            front=0;
        }
        rear=(rear + 1)% 5;
        queue[rear] = a;
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty\n");
    } else {
        int i = front;
        while (1) {
            printf("%d ", queue[i]);
            if (i == rear) {
                break;
            }
            i = (i + 1) % 5;
        }
        printf("\n");
    }
}

int main() {
    int ch, item;

    
    while (1) {
        printf("1 to Enqueue\n");
        printf(" 2 to Dequeue\n");
        printf(" 3 to Display\n");
        printf("0 to Exit\n");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter the element to enqueue: ");
                scanf("%d", &item);
                enqueue(item);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 0:
                printf("Exiting program.\n");
                return 0;

            default:
                printf("ERROR: Invalid choice\n");
        }
    }
}