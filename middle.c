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
void middle(struct node *head)
{
    struct node *slow=head;
    struct node *fast=head;
    if(head!=NULL)
    {
        while(fast!=NULL&&fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        printf("the middle element is %d",slow->data);
    }
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
    add(&head,5);
    add(&head,9);
    add(&head,8);
    add(&head,6);
    printlist(head);
    middle(head);

}
/*int main
{
    struct node *head=NULL;
    int i;
    for(i=5;i>0;i--)
    {
        add(&head,i);
        printlist(head);
        printmiddle(head);
    }
}