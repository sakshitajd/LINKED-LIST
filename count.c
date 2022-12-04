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
int count(struct node *head, int search)
{
    struct node *current=head;
    int count=0;
    while (current!=NULL);
    {
        if(current->data==search)
        count++;
        current=current->next;
    }
    return count;
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
    printf("given linkd list :");
    add(&head,7);
    add(&head,6);
    add(&head,4);
    add(&head,6);
    add(&head,7);
    add(&head,7);
    printlist(head);
    printf("count of 7 is %d",count(head,7));
    printf("count of 6 is %d",count(head,6));
   
}