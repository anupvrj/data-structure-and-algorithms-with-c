#include <stdio.h>
#include <stdlib.h>

// ----------------------------------------------------------------
/*---------------------------
Step 1: Create a LinkedList
Step 2: Count the node of LinkedList
-------------------------------------*/
// ----------------------------------------------------------------

// Create a LinkedList

struct Node
{
    int data;
    struct Node *next;
};
struct Node *newNode, *temp, *head;

int dataToInsert[] = {20, 30, 40, 50, 60};

void createLinkedListUsingArrayData()
{
    head = 0;
    for (int i = 0; i < sizeof(dataToInsert) / sizeof(dataToInsert[i]); i++)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = dataToInsert[i];

        // Make the newNode next pointer NULL or 0
        newNode->next = NULL;
        if (head == 0)
        {
            temp = head = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }
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

// Step 2: Count the node of LinkedList
int length_of_List()
{
    int count = 0;
    temp = head;
    if (head == 0)
    {
        return 0;
    }
    else
    {
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }
}

int main()
{
    createLinkedListUsingArrayData();
    displayList();
    printf("\n Lenght of the list: %d", length_of_List());
}
