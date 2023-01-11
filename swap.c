#include<stdio.h>
#include<stdlib.h>
struct node
{
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
void swap(struct node **head,int x,int y)
{
    if(x==y)
    return;
    struct node *preX=NULL,*currX=*head;
    while(currX&&currX->data!=x)
    {
        preX=currX;
        currX=currX->next;
    }
    struct node *preY=NULL,*currY=*head;
    while(currX&&currX->data!=y)
    {
        preY=currY;
        currY=currY->next;
    }
    if(currX==NULL||currY==NULL)
    return;
    if(preX!=NULL)
    preX->next=currY;
    else
    *head=currY;
    if(preY!=NULL)
    preY->next=currX;
    else
    *head=currX;
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
    add(&head,6);
    add(&head,9);
    add(&head,4);
    add(&head,1);
    printlist(head);
    
    printf("\nafter swapping :\n");
    swap(&head,6,4);
    printlist(head);
}