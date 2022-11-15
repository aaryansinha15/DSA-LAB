// Given two single linked lists, write a C code to merge their nodes together to make one list, taking nodes alternately between the two lists. So the output with {1, 2, 3} and {7, 13, 1} should yield {1, 7, 2, 13, 3, 1}. If either list runs out, all the nodes should be taken from the other list.
#include <stdio.h>
#include <stdlib.h>
 

struct Node
{
    int data;
    struct Node *next;
};
 

void push(struct Node ** head_ref, int new_data)
{
    struct Node* new_node =
           (struct Node*) malloc(sizeof(struct Node));
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)  = new_node;
}

void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void merge(struct Node *p, struct Node **q)
{
     struct Node *p_curr = p, *q_curr = *q;
     struct Node *p_next, *q_next;
 
     while (p_curr != NULL && q_curr != NULL)
     {
         
         p_next = p_curr->next;
         q_next = q_curr->next;
 
         
         q_curr->next = p_next;  
         p_curr->next = q_curr;  
 
       
         p_curr = p_next;
         q_curr = q_next;
    }
 
    *q = q_curr; 
}
 

int main()
{
     struct Node *p = NULL, *q = NULL;
     push(&p, 1);
     push(&p, 2);
     push(&p, 3);
     printf("First Linked List:\n");
     printList(p);
 
     push(&q, 7);
     push(&q, 13);
     push(&q, 1);
     printf("Second Linked List:\n");
     printList(q);
 
     merge(p, &q);
 
     printf("Modified First Linked List:\n");
     printList(p);
 
     printf("Modified Second Linked List:\n");
     printList(q);
 
     getchar();
     return 0;
}
