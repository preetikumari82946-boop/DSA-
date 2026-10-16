#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int);
void pop();
void display();

int main()
{
    int choice, item;

    while (1)
    {
        printf("\n----- STACK MENU -----\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter element to push: ");
                scanf("%d", &item);
                push(item);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

void push(int item)
{
    if (top == SIZE - 1)
    {
        printf("Stack is FULL (OVERFLOW)\n");
    }
    else
    {
        top++;
        stack[top] = item;
        printf("%d pushed into stack.\n", item);
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack is EMPTY (UNDERFLOW)\n");
    }
    else
    {
        printf("Popped item is %d\n", stack[top]);
        top--;
    }
}

void display()
{
    if (top == -1)
    {
        printf("Stack is EMPTY\n");
    }
    else
    {
        printf("Elements of stack are:\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}