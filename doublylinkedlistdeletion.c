#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *previous;
};
void traversal(struct node *head)
{
    while(head!=NULL)
    {
        printf("elements: %d\n",head->data);
        head=head->next;
    }
}
struct node *deleteatfirst(struct node *head)
{
    struct node *p=head;
    head=head->next;
    free(p);
    return head;
}
struct node *deleteatlast(struct node *head)
{
    struct node *p=head;
    struct node *q=head->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
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
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    head->previous=NULL;
    head->data=10;
    head->next=second;
  

    second->previous=head;
    second->data=20;
    second->next=third;
    

    third->previous=second;
    third->data=30;
    third->next=fourth;

    fourth->previous=third;
    fourth->data=40;
    fourth->next=NULL;
    traversal(head);
    // head=deleteatfirst(head);
    // head=deleteatlast(head);
    head=searchatindex(head,20);
    traversal(head);
}