#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;

};
void traverse(struct node *head)
{
    while(head!=NULL)
    {
        printf("%d\n",head->data);
        head=head->next;
    }
}
struct node *insertatfist(struct node *head,int data)
{
  struct node *temp=(struct node*)malloc(sizeof(struct node));
  temp->data=data;
  temp->next=head;
  return temp;
}
struct node *insertatlast(struct node *head,int data)
{
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->next=NULL;
    struct node *p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=temp;
    return p;

}
int main()
{
  struct node *head;
  struct node *second;
  head=(struct node*)malloc(sizeof(struct node));
  second=(struct node*)malloc(sizeof(struct node));
  
  
  head->data=40;
  head->next=second;
  second->data=68;
  second->next=NULL;
  traverse(head);
//   head=insertatfist(head,50);
//   printf("after insertion: /n");
//   traverse(head);
head=insertatlast(head,80);
printf("after insertion:\n");
traverse(head);
  



}