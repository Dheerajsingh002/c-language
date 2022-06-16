#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    
};
void traversal(struct node *head)
{
    while(head!=NULL)
    {
        printf("elements: %d\n",head->data);
        head = head->next;
    }
}
// void traversal1(struct node *fourth)
// {
//     while(fourth!=NULL)
//     {
//         printf("elements: %d\n",fourth->data);
//         fourth = fourth->next;
//     }
// }
struct node *insertfirst(struct node *head,int data)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}
struct node *insertatlast(struct node *fourth,int data)
{
   struct node  *ptr=(struct node*)malloc(sizeof(struct node));
    fourth->next=ptr;
    ptr->data=data;
    ptr->next=NULL;
    return ptr;
}
struct node *insertmiddle(struct node *middle,int data,int pos)
{
    struct node *middle=(struct node*)malloc(sizeof(struct node));
    for(int i=0;i<=pos;i++){
     middle->next=pos;
     middle->data=data;
     return middle;
    }


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
    head=insertfirst(head,34);
    traversal(head);
    fourth=insertatlast(fourth,90);
    traversal(head);
    middle=insertmiddle(middle,30,2);
    traversal(head);


}
