#include<stdio.h>
#include<stdlib.h>
    struct node{
        int data;
        struct node *next;
        struct node *previous;

    };
    void traversal(struct node *n1)
    {
       while(n1!=NULL)
       {
          printf("elements: %d\n",n1->data);
           n1=n1->next;
       } 
       
    }
    struct node *insertfirst(struct node *n1,struct node *previous,int data)
    {
        struct node *ptr=(struct node*)malloc(sizeof(struct node));
        ptr->data=data;
        ptr->next=n1;
        ptr->previous=NULL;
        return ptr;
    }
    struct node *insertallast(struct node *n1,struct node *previous,int data)
    {
        struct node *ptr=(struct node*)malloc(sizeof(struct node));
         ptr->data=data;
         struct node *p=n1;
         while(p->next!=NULL)
         {
             p=p->next;
         }
         p->next=ptr;
         ptr->next=NULL;
         ptr->previous=p;
        //  ptr->next=NULL;
        //  ptr->previous=n3;
        //  return ptr;
        return n1;

    }
    
    int main()
    {
        struct node *n1;
        struct node *n2;
        struct node *n3;
        struct node *n4;
        n1=(struct node *)malloc(sizeof(struct node));
        n2=(struct node *)malloc(sizeof(struct node));
        n3=(struct node *)malloc(sizeof(struct node));
        n4=(struct node *)malloc(sizeof(struct node));
        n1->data=12;
        n1->next=n2;
        n1->previous=NULL;

        n2->data=36;
        n2->next=n3;
        n2->previous=n1;

        n3->data=45;
        n3->next=n4;
        n3->previous=n2;

        n4->data=40;
        n4->next=NULL;
        n4->previous=n3;
        traversal(n1);
        // n1=insertfirst(n1,NULL,50);
        insertallast(n4,200,56);
        traversal(n1);

    }
