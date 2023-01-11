#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void add(struct node **head,int val)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=*head;
    *head=newnode;
}

void InsertAtFront(struct node **head,int num)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=num;
    newnode->next=*head;
    *head=newnode;
    printf("inserted element=%d\n",num);
}

void printlist(struct node *ptr)
{
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
   
    struct node *head=NULL;
    printf("given linked is :\n");
    add(&head,3);
    add(&head,4);
    add(&head,7);
    printlist(head);
    printf("\nafter insertion :\n");
    InsertAtFront(&head,8);
    printlist(head);
   
}
