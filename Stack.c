#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;

void push(int element);
int pop();
int peek();
void display();

int main() {
    int choice, data;

    while (1) {

        printf("------------------------------------\n");
        printf("    STACK IMPLEMENTATION PROGRAM    \n");
        printf("------------------------------------\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("------------------------------------\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to push into stack: ");
                scanf("%d", &data);
                push(data);
                break;

            case 2:
                data = pop();
                if (data != -1)
                    printf("Popped Data: %d\n", data);
                break;

            case 3:
                data = peek();
                if (data != -1)
                    printf("Top Element: %d\n", data);
                break;

            case 4:
                display();
                break;

            case 5:
                printf("Exiting from app.\n");
                exit(0);
                break;

            default:
                printf("Invalid choice, please try again.\n");
        }

        printf("\n\n");
    }

    return 0;
}

void push(int element) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed. Stack is full.\n");
        return;
    }

    newNode->data = element;
    newNode->next = top;
    top = newNode;

    printf("Data pushed to stack.\n");
}

int pop() {
    if (top == NULL) {
        printf("Stack is empty.\n");
        return -1;
    }

    int data = top->data;
    struct Node* temp = top;
    top = top->next;
    free(temp);

    return data;
}

int peek() {
    if (top == NULL) {
        printf("Stack is empty.\n");
        return -1;
    }

    return top->data;
}

void display() {
    if (top == NULL) {
        printf("Stack is empty.\n");
        return;
    }

    struct Node* current = top;
    printf("Stack elements: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}




