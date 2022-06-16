#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *next;
};
void traversal(struct node *start){
    while(start!=NULL)
    {
        printf("%d\n",start->data);
        start=start->next;
    }
}
int main()
{
    struct node *start;
    struct node *second;
    start=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    start->data=39;
    start->next=second;

    second->data=40;
    second->next=NULL;
    int count=1;
    traversal(start);
    if(start==NULL)
    {
        printf("Null");
    }
    else
    {
        while(start->next!=NULL){
            start=start->next;
            count++;
        }
        printf("%d",count);
    }
}