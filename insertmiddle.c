#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    int position;
    struct node *next;
};
int main()
{
    int data,position;
    struct node *temp;
    scanf("%d",&data);
    scanf("%d",&position);

    struct node *start;
    start=(struct node *)malloc(sizeof(struct node));
    start->data=data;
    start->next=NULL;
    if(start==NULL)
    {
        temp=start;
    }
    else
    {
        temp=start;
        for(int i=0;i<=position;i++)
        {
            temp=temp->next;
        }
        start->next=temp;
        start=temp->next;   
    }
}
i