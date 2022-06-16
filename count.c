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
        printf("element: %d\n",head->data);
        head=head->next;
    }
}
int main()
{
    int count=1;
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));

    head->previous=NULL;
    head->data=30;
    head->next=second;

    second->previous=head;
    second->data=40;
    second->next=third;

    third->previous=second;
    third->data=50;
    third->next=fourth;

    fourth->previous=third;
    fourth->data=60;
    fourth->next=NULL;
    traversal(head);
    if(head==NULL)
    {
        printf("node is not found");
    }
    else{
    while(head->next!=NULL)
    {
        head=head->next;
        count++;
    }
    printf("%d",count);
    }

}