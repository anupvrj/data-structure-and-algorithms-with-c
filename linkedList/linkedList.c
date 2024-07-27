#include <stdio.h>
#include <stdlib.h>

// define the data type using structure

struct Node
{
    int data;
    struct Node *next;
};
struct Node *head, *newNode, *temp;

void createNodeAndInsert()
{
    head = 0;
    int valueToInsert;

    int choice;
    while (choice != 0)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        if (newNode == NULL)
        {
            printf("\nError: Failed to allocate\n");
            return;
        }
        printf("\n Enter the data to be inserted: ");
        scanf("%d", &valueToInsert);
        newNode->data = valueToInsert;
        // Make the newNode next pointer NULL or 0
        newNode->next = NULL;

        if (head == 0)
        {
            head = temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
        printf("\nDo you want to continue or terminate(1, 0)?\n");
        scanf("%d", &choice);
    }
    return;
}

void displayList()
{
    temp = head;
    if (temp == NULL)
    {
        printf("\nList is empty\n");
    }
    else
    {
        while (temp != NULL)
        {

            printf("\n %d\n", temp->data);
            temp = temp->next;
        }
    }
}

void main()
{
    int choice;
    do
    {
        printf("\n****** LINKED LIST ******\n");
        printf("1. Create and Insert a new node \n2. Display the linked list\n3. Close\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            createNodeAndInsert();
            break;
        case 2:
            displayList();
            break;
        case 3:
            break;
        default:
            printf("\n*** Select a valid option *** \n");
        }

    } while (choice != 3);
}