#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Node
    {
        double value;
        struct Node *nextNode;
    } Node;

Node createNode(Node *previousNode, double value);
Node insertBetween(Node *previousNode, Node *followingNode, double value);
void print_array(int *array);

int main(void) {
    
    Node *head = malloc(sizeof *head);

    Node *previousNode = NULL;
    for (int i = 0; i < 50; i++)
    {
        if (i == 0)
        {
            *previousNode = createNode(head, i);
        }
        else
        {
            *previousNode = createNode(previousNode, i);
        }
        
    }

    srand((unsigned)time(NULL)); 
    int array[51];
    for (int i = 0; i < 50; i++)
    {
        array[i] = rand();
    }


    int randomNumber = rand();
    array[3] = randomNumber;

    int flag = 0;
    previousNode = head;
    while (flag == 0)
    {
        if (previousNode != NULL)
        {
            if (previousNode->nextNode != NULL)
            {
                if (previousNode->value == 3)
                {
                    insertBetween(previousNode, previousNode->nextNode, randomNumber);
                }
            }
            else
            {
                createNode(previousNode, randomNumber);
            }
            
            
            
        }   
    }  
    print_array(array);
}

Node createNode(Node *previousNode, double value){
    Node *newNode = malloc(sizeof *newNode);
    newNode->value = value;

    previousNode->nextNode = newNode;
    return *newNode;
}
Node insertBetween(Node *previousNode, Node *followingNode, double value){
    Node *newNode = malloc(sizeof *newNode);
    newNode->value = value;

    previousNode->nextNode = newNode->nextNode;
    previousNode->nextNode = newNode;
    return *newNode;
}

void print_array(int *array){
    printf("Array: ");
    for (int i = 0; i < ((sizeof array)/(sizeof array[0])); i++)
    {
        printf("%-5d", array[i]);
    }
    
}