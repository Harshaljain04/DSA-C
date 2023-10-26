#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char data;
    struct Node* next;
};

struct Node* createNode(char data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Node* insertEnd(struct Node* head, char data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        head = newNode;
    } else {
        struct Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
    return head;
}

struct Node* deleteNthNode(struct Node* head, int n) {
    if (head == NULL) {
        return NULL;
    }

    struct Node* current = head;
    struct Node* prev = NULL;
    int count = 1;

    while (count < n) {
        if (current->next == NULL) {
            current = head;
        } else {
            prev = current;
            current = current->next;
        }
        count++;
    }

    if (prev == NULL) {
        head = current->next;
    } else {
        prev->next = current->next;
    }

    free(current);
    return head;
}

int main() {
    char name1[50];
    char name2[50];

    printf("Enter the first name: ");
    scanf("%s", name1);

    printf("Enter the second name: ");
    scanf("%s", name2);

    char combinedNames[100];
    strcpy(combinedNames, name1);
    strcat(combinedNames, name2);

    struct Node* head = NULL;
    const char* flames = "FLAMES";
    for (int i = 0; i < strlen(flames); i++) {
        head = insertEnd(head, flames[i]);
    }

    int uncommonLetters = strlen(combinedNames);

    while (head->next != NULL) {
        head = deleteNthNode(head, uncommonLetters);
    }

    printf("Remaining letter: %c\n", head->data);
    switch (head->data) {
        case 'F':
            printf("Friends\n");
            break;
        case 'L':
            printf("Love\n");
            break;
        case 'A':
            printf("Affection\n");
            break;
        case 'M':
            printf("Marriage\n");
            break;
        case 'E':
            printf("Enmity\n");
            break;
        case 'S':
            printf("Sister\n");
            break;
        default:
            printf("Invalid result\n");
            break;
    }

    struct Node* current = head;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}
