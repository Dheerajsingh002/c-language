#include<stdio.h>
#include<stdlib.h>
struct node
{
   int num;
   struct node *nextptr;  
}*stnode;
void createNodelist(int n);
void displaylist();
int main()
{
   int n;
   scanf("%d",&n);
   createNodelist(n);
   displaylist();
   return 0;
}
void createNodelist(int n)
{
   struct node *fnnode,*tmp;
   int num,i;
   stnode=(struct  node*)malloc(sizeof(struct node));
   if(stnode==NULL)
   {
      printf("memory can not be allocated");
   }
   else{
      scanf("%d",&num);
      stnode->num=num;
      stnode->nextptr=NULL;
      tmp=stnode;
      for(i=2;i<=n;i++)
      {
         fnnode=(struct node*)malloc(sizeof(struct node));
         if(fnnode==NULL)
         {
            printf("memory can not be allocated");
            break;
         }
         else{
            scanf("%d",&num);
            fnnode->num=num;
            fnnode->nextptr=NULL;
            tmp->nextptr=fnnode;
            tmp=tmp->nextptr;
         }
      }
   }
   
}
void displaylist()
{
   struct node *tmp;
   if(stnode==NULL)
   {
      printf("list is empty");
   k   }
   else{
      tmp=stnode;
      while(tmp!=NULL)
      {
         printf("data =%d\n",tmp->num);
         tmp=tmp->nextptr;
      }
   }
}
