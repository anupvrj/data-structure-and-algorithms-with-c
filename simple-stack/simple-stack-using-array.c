#include <stdio.h>

int stack[100], i, j, choice = 0, n, top = -1;
void push();
void pop();
void show();

int main(void)
{
    printf("Enter the number of elements in stack\n");
    scanf("%d", &n);
    printf("*********Stack operations using array*********\n");

    printf("\n--------\n");
    do
    {
        printf("Choose one from the below options...\n");
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");
        printf("\nEnter your choice \n");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            show();
            break;
        }
        case 4:
        {
            printf("Exiting.....\n\n");
            break;
        }
        default:
        {
            printf("Choose a valid option\n");
        }
        }
    } while (choice != 4);
}

void push()
{
    int val;
    if (top == n)
    {
        printf("Stack is full\n");
    }
    else
    {
        printf("Enter the value to be pushed\n");
        scanf("%d", &val);
        top++;
        stack[top] = val;
    }
}

void pop()
{
    int val;
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        top = top - 1;
    }
}

void show()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        for (i = top; i >= 0; i--)
            printf("%d\t |", stack[i]);
    }
}