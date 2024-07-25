#include <stdio.h>

#define MAX_SIZE 10
int queue[MAX_SIZE], front = 0, rear = -1, item;

void insert();
void delete1();
void display();

int main()
{
    int choice;

    printf("\n\n\n*******Implement Queue using Array****\n\n\n");
    do
    {
        printf("\n>>>Choose one from the below options...\n");
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
        printf("\nEnter your choice \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete1();
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        default:
            printf("choose valid choice...\n");
        }
    } while (choice != 4);
    return 0;
}

void insert()
{
    int item;
    if (rear == MAX_SIZE - 1)
    {
        printf("Queu is full\n");
    }
    else
    {
        rear++;
        printf("Enter the element to be inserted\n");
        scanf("%d", &item);
        queue[rear] = item;
    }
}

void delete1()
{
    int item;
    if (front > rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        item = queue[front];
        printf("\n deleted Element %d", item);
        front = front + 1;
    }
}
void display()
{

    int item;
    int i;
    if (front > rear)
    {
        printf("\n\n\t****** Queue is empty ******\n\n");
    }
    else
    {
        printf("\n\n ***** Printing element in queue ****\n");

        for (int i = rear; i >= front; i--)
        {
            printf("%d\t | ", queue[i]);
        }
    }
}