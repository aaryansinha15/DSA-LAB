// Let the number "XYZ" be represented as Z->Y->X in the linked list. If two such numbers are given in two different linked lists, 
// then with the above representation, 
// write a C-program to subtract the second number (represented in the second linked list) from the first number (represented in the first linked 
// list) and store the result 
// in the third linked list with above representation.


#include <stdio.h>
#include <stdlib.h>

struct node{
        int info;
        struct node *link;
    }*temp,*q,*start,*sa,*sb;

void createList();
void display();

int main(){
    int data,a,b;
    start=NULL;
    printf("Enter 1st and 2nd Number: ");
    scanf("%d%d",&a,&b);
    while(a!=0){
        int data =a%10;
        createList(data);
        a=a/10;
    }
    sa=start;
    start=NULL;
    while(b!=0){
        int data =b%10;
        createList(data);
        b=b/10;
    }
    sb=start;
    start=NULL;
    while(sa!=NULL){
        data =sa->info-sb->info;
        createList(data);
        sa=sa->link;
        sb=sb->link;
    }
    display();
}

void createList(int data){
    temp=malloc(sizeof(struct node));
    temp->info=data;
    temp->link=NULL;
    if(start==NULL){
        start=temp;
    }
    else{
        q=start;
        while(q->link!=NULL){
            q=q->link;
        }
        q->link=temp;
    }
}

void display(){
    if(start == NULL){
        printf("No list found");
        return;
    }
    q=start;
    while(q!=NULL){
        printf("%d ",q->info);
        q=q->link;
    }
}