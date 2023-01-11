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
void addlast(struct node *head,int new)
{
    if(head==NULL)
    {
        printf("error");
    }
    struct node *newnode=(struct node*)malloc(sizeof (struct node));
    newnode->data=new;
    newnode->next=NULL;
    while(head->next!=NULL)
    head=head->next;
    head->next=newnode;
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
    add(&head,4);
    add(&head,7);
    add(&head,8);
    printlist(head);
    printf("\n");
    printf("after insertion :\n");
    addlast(head,2);
    printlist(head);

}