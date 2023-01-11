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
struct node *reverse(struct node *head)
{
    struct node *previous,*current,*next;
    previous=NULL;
    current=head;

    while(current!=NULL)
    {
        next=current->next;
        current->next=previous;
        previous=current;
        current=next;
    }
    return previous;
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
    add(&head,5);
    add(&head,8);
    add(&head,9);
    add(&head,4);
    add(&head,1);
    printlist(head);
    
    head= reverse(head);
    printf("\nlinked list after reversing :\n");
    printlist(head);
}