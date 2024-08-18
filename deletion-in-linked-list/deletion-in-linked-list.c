

// Deletation in LinkedList
/*
Possible deletion in LinkedList are-
1. Delete the first element
2. Delete element at given position
3. Delete the last emement

*/

/*
1. Delete the first element

Step-1 - Get the first element by checking the head
Step-2 - update the head position to next position
Step-3 - Delete the element which was on the head position. you can use temp variable to store the head element that you waont to delete.
*/

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL, *temp, *newNode, *current;

void createLinkedList()
{

    // struct Node *current0;
    int data = 0;
    int keep_going = 1;
    do
    {
        printf("Enter the element you want to add to the linked list: \n");

        scanf("%d", &data);
        newNode = (struct Node *)(malloc(sizeof(struct Node)));

        newNode->data = data;

        // Make the newNode next pointer NULL or 0
        newNode->next = NULL;

        if (head == NULL)
        {
            current = head = newNode;
        }
        else
        {
            current->next = newNode;
            current = newNode;
        }

        printf("\n Do you want to continue? type 1 else type 0\n");
        scanf("%d", &keep_going);

    } while (keep_going != 0);
}
void displayLinkedList()
{

    struct Node *current;

    current = head;
    if (current == NULL)
        printf("\n List is empty::: \n");

    else
        while (current != NULL)
        {
            printf("%d ---> ", current->data);
            current = current->next;
        }
}

void deleteAtStart()
{

    temp = head;
    head = head->next;
    free(temp);
    printf("\n Item from start has been deleted::\n");
}
void deleteAtGivenPosition()
{
    int position = 0;

    int count = 0;

    struct Node *current, *del;

    current = head;

    printf("\nEnter the position that you want to delete::\n");

    scanf("%d", &position);
    if (position == 0)
    {
        head = head->next;
        current->next = NULL;
        free(current);
    }
    else
    {
        for (count; count < position - 1; count++)
        {
            printf("\n Printing coun: %d \n", count);

            current = current->next;
        }

        del = current->next;
        current->next = current->next->next;
        del->next = NULL;
        free(del);
    }
    printf("\nDeleted item at given position %d, %d \n");
}
void deleteAtEnd()
{
    struct Node *current, *previous;
    current = head;

    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    // If there's only one node in the list
    if (head->next == NULL)
    {
        free(head);
        head = NULL;
        printf("\nDeleted the only item in the list.\n");
        return;
    }

    // Traverse to the last node, keeping track of the previous node
    while (current->next != NULL)
    {
        printf("\nCurrent is %d", current->data);
        previous = current;
        current = current->next;
        printf("\nCurrent next is %d", current->data);
    }

    // Now, current is the last node, and previous is the second-to-last node
    previous->next = NULL;
    free(current);
    printf("\nDeleted item at end.\n");
}

void main()
{
    int choice;
    do
    {
        printf("\n****** LINKED LIST ******\n");
        printf("1. Create LinkedList \n2. Delete at the start\n3. Delete at given position \n4. Delete at end\n5. Display the list\n 6. Exist\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            createLinkedList();
            break;
        case 2:
            deleteAtStart();
            break;
        case 3:
            deleteAtGivenPosition();
            break;
        case 4:
            deleteAtEnd();
            break;
        case 5:
            displayLinkedList();
            break;
        case 6:
            break;
        default:
            printf("\n*** Select a valid option *** \n");
        }

    } while (choice != 6);
}
