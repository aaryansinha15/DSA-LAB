//  Write a C code to replace every element in a linked list with the next greatest element present in 
// // the same list.

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node node;
node *head=NULL, *n;
int main()
{
    node *ptr;
    int size;
    printf("List size= ");
    scanf("%d", &size);
    if(size==0)
    {
        printf("EMPTY");
        exit(1);
    }
    for(int i=0;i<size;i++)
    {
        n=(node*)malloc(sizeof(node));
        printf("Data: ");
        scanf("%d", &n->data);
        n->next=NULL;
        if(head==NULL)
        head=n;
        else
        {
            ptr=head;
            while(ptr->next!=NULL)
            ptr=ptr->next;
            ptr->next=n;
        }
    }
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ", ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
    ptr=head;
    node *pr;
    int c=0;
    while(ptr->next!=NULL)
    {
        c=0;
        pr=ptr->next;
        while(pr!=NULL)
        {
            if(pr->data>ptr->data)
            {
                c++;
                ptr->data=pr->data;
                break;
            }
            pr=pr->next;
        }
        if(c==0)
        ptr->data=-1;
        ptr=ptr->next;
    }
    ptr->data=-1;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ", ptr->data);
        ptr=ptr->next;
    }
}