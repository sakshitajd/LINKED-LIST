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
int count(struct node *head)
{
    int count=0;
    struct node *current=head;
    while(current!=NULL)
    {
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
    add(&head,7);
    add(&head,8);
    add(&head,4);
    add(&head,4);
    
    printlist(head);
    printf("\n");
    printf("length of linked list :%d");
    count(head);

}