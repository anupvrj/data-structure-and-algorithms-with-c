#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL, *newNode, *temp;
;

void createAlist()
{
    int item;
    printf("\nEnter Item that you want to insert::\n");
    scanf("%d", &item);
    newNode = (struct Node *)malloc(sizeof(struct Node));
    if (head == NULL)
    {
    }
}
void insertAtStart()
{

    int item;
    struct Node *current;
    printf("\nEnter Item that you want to insert at the start::\n");
    scanf("%d", &item);
    newNode = (struct Node *)(malloc(sizeof(struct Node)));

    newNode->next = NULL;
    if (head == NULL)
    {
        newNode->data = item;
        current = head = newNode;
    }
    else
    {
        newNode->data = item;
        newNode->next = head;
        head = newNode;
    }
}

void display1()
{
    struct Node *temp;
    temp = head;
    if (temp == NULL)
    {
        printf("\nEmpty \n");
    }
    else
    {

        //  while (temp != NULL)
        // {

        //     printf("\n %d\n", temp->data);
        //     temp = temp->next;
        // }
        while (temp != NULL)
        {
            printf("\n %d -->\n", temp->data);
            temp = temp->next;
        }
    }
}

void insertAtEnd()
{

    struct Node *temp;
    int item;

    printf("\nEnter Item that you want to insert at the end\n");
    scanf("%d", &item);
    newNode = (struct Node *)(malloc(sizeof(struct Node)));
    // Add data to new node
    newNode->data = item;
    // check if list is empty then assign new node to head
    if (head == NULL)
    {
        head = newNode;
    }

    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        newNode->next = NULL;

        // assign address of new node to temp->next which is acutally the last node in the list
        temp->next = newNode;
    }
}

void insertAtGivenPosition()
{
    struct Node *temp;
    int position, item;
    printf("\nEnter the position where you want to insert\n");
    scanf("%d", &position);
    printf("\nEntet the data you want to insert\n");
    scanf("%d", &item);
    newNode = (struct Node *)(malloc(sizeof(struct Node)));
    newNode->data = item;
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        temp = head;
        for (int i = 1; i < position - 1; i++)
        {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void main()
{
    int choice;
    do
    {
        printf("\n****** LINKED LIST ******\n");
        printf("1. Insert at start \n2. Insert at the end\n3. Insert at given position\n 4. Display the list\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insertAtStart();
            break;
        case 2:
            insertAtEnd();
            break;
        case 3:
            insertAtGivenPosition();
            break;
        case 4:
            display1();
            break;
        case 5:
            break;
        default:
            printf("\n*** Select a valid option *** \n");
        }

    } while (choice != 5);
}