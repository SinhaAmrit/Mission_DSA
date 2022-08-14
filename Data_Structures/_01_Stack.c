#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define CAPACITY 5

bool isFull();
bool isEmpty();
void push();
void pop();
void peek();
void traverse();
int stack[CAPACITY], top = -1, ch;
int main()
{
    while (1)
    {
        system("clear");
        printf("----------MENU----------\n");
        printf("|                      |\n");
        printf("|   [1]  |  Push       |\n");
        printf("|   [2]  |  Pop        |\n");
        printf("|   [3]  |  Peek       |\n");
        printf("|   [4]  |  Traverse   |\n");
        printf("|   [5]  |  Exit       |\n");
        printf("|                      |\n");
        printf("------------------------\n");
        printf("$Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            traverse();
            break;
        case 5:
            printf("$See you soon 😊\n");
            printf("$Quitting...\n");
            sleep(1);
            exit(0);
            break;
        default:
            printf("$Please choose option between 1 to 5.\n");
            sleep(1);
            break;
        }
    }
    return 0;
}

void push()
{
    int element;
    if (isFull())
        printf("Stack is full!\n");
    else
    {
        printf("$Enter an element to push: ");
        scanf("%d", &element);
        stack[++top] = element;
        printf("========================================\n");
        printf("| Message: %d is pushed to the stack |\n", stack[top]);
        printf("========================================\n");
    }
    sleep(1);
    system("clear");
}
void pop()
{
    if (isEmpty())
    {
        printf("Stack is empty! \n");
    }
    else
    {
        printf("========================================\n");
        printf("| Message: %d is popped from the stack |\n", stack[top--]);
        printf("========================================\n");
    }
    sleep(3);
}
void peek()
{
    if (isEmpty())
        printf("Stack is empty!\n");
    else
    {
        printf("======================================\n");
        printf("| Message: %d is on top of the stack |\n", stack[top]);
        printf("======================================\n");
    }
    sleep(3);
}
void traverse()
{
    if(isEmpty())
        printf("Stack is empty!\n");
    else{
        printf("[ ");
        for(int i = 0; i < top; i++)
            printf("%d ", stack[i]);
        printf(" ]\n");
    }
    sleep(3);
}
bool isEmpty()
{
    if (top == -1)
        return true;
    else
        return false;
}
bool isFull()
{
    if (CAPACITY == top + 1)
        return true;
    else
        return false;
}