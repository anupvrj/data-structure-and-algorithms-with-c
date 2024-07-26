#include <stdio.h>
#define SIZE 7
int q[SIZE], front = -1, rear = -1, choice = -1;

void insert()
{
    printf("\n Instering in the Queue");
    // check if Queue is alread full
    printf("\nFront %d", front);
    printf("\nRear %d \n", rear);

    if (front == rear + 1 || (front == 0 && rear == SIZE - 1))
    {
        printf("\n Queue is full..\n\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }

        rear = (rear + 1) % SIZE;
        int n;
        scanf("%d", &n);
        q[rear] = n;

        printf("\n Successfully inserted %d", n);
    }
}

void display()
{
    if (front == -1)
    {
        printf("\n Queue is empty..\n\n");
    }
    else
    {
        printf("\n printing..\n\n");
        for (int i = front; i != rear; i = (i + 1) % SIZE)
        {
            printf("%d ", q[i]);
        }
    }
}
int delete1()
{
    int item;
    printf("\n deleting items from the Queue\n");
    // check if Queue is empty
    if (front == -1)
    {
        printf("\n Queue is empty !! \n");
        return (-1);
    }
    else
    {
        item = q[front];
        front = (front + 1) % SIZE;
        printf("\nDeleted Item %d \n", item);
    }
    return (item);
}

int main()
{
    printf("\n********Circular Queue using Array*********\n\n\n");
    do
    {
        printf("\n1.Insert\n2.Display\n3.Delete\n4.Exit");
        printf("\n\nEnter your choice \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            display();
            break;
        case 3:
            delete1();
            break;
        case 4:
            printf("Exiting.....\n\n");
            break;
        default:
            printf("\nChoose a valid option\n");
        }
    } while (choice != 4);
}
