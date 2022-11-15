// Write a C code to create and reverse a doubly linked list

#include <stdio.h>
#include<stdlib.h>

struct node 
{
    int info;
    struct node *link;
};

struct node * last =NULL;

void create();
void delete();
void reverse();

int main () 
{
  int ch;   
  int data,n,i;


  printf("\n 1.Create \n 2.Display \n 3.Reverse");
 
  while(1)

  {
      printf("Enter your chioce: ");
      scanf("%d",&ch);

      switch(ch)
       {
           case 1:
           printf("Enter the number of nodes");
           scanf("%d",&n);
           for(int i=0; i<n; i++)
           {

               printf("Enter the %d element",i+1);
               scanf("%d",&data);

              create(data);
             
           }

           break;
        
           case 2:
           display();
           break;

           case 3:
           reverse();
           break;

           default:
           exit(0);
       }

    }

 
return 0;

}

void create(int data)
{
    int c;
    struct node *temp;

    temp = (struct node *)malloc(sizeof(struct node));

    temp->info = data;
    
    if(last ==NULL) 
    {
        last=temp;
       
       temp->link =last;
    }

    else
    {
        temp->link =last->link;
        last->link =temp;
        last=temp;
         
         printf("\n If you wish to continue press 1 otherwise 0");
          scanf("%d",&c);
    }
}
void display()
{
    struct node *q;

    q=last->link;

    while(q!=last)
{
     printf("%d -> ",q->info);

     q=q->link; 
}
  printf("%d->",last->info);

}



