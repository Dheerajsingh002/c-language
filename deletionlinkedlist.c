#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void traversal(struct node *head)
{
    while(head!=NULL)
    {
        printf("elements: %d\n",head->data);
        head=head->next;    
    }
}
struct node *deletion(struct node *head)
{
    struct node *ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
struct node *middledeletion(struct node *head,int index)
{
    struct node *p=head;
     struct node *q=head->next;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        q=q->next;
        i++;            
    }
   
    p->next=q->next;
    free(q);
    return head;
}
struct node *searchatindex(struct node *head,int value)
{
    struct node *p=head;
    struct node *q=head->next;
    while(q->data!=value && q->next!=NULL)
    {
           p=p->next;
           q=q->next;
    }
    if(q->data==value)
    {
        p->next=q->next;
        free(q);
        return head;
    }
}
struct node *lastdeletion(struct node *head)
{
    struct node *p=head;
    struct node *q=head->next;
    while(q->next!=NULL){
         p=p->next;
         q=q->next;

    }
    p->next=NULL;
    free(q);
    return head;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));

    third=(struct node *)malloc(sizeof(struct node));

    fourth=(struct node *)malloc(sizeof(struct node));
    head->data=6;
    head->next=second;

    second->data=8;
    second->next=third;

    third->data=10;
    third->next=fourth;

    fourth->data=20;
    fourth->next=NULL;
    traversal(head);
    // head=middledeletion(head,2);
    // head=lastdeletion(head);
    head=searchatindex(head,8);
    traversal(head);
}