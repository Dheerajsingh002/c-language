#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
    int val;
};
int isfull(struct stack *ptr,int val)
{
   
    if(ptr->top==ptr->size-1)
    {
        printf("stack is full");
    }
    else
    {  
     
        ptr->top=+1;
        ptr->arr[ptr->top]=val;
        printf("data inserted: %d\n",ptr->arr[ptr->top]);

    }
}
int isempty(struct stack *ptr,int val)
{
    if(ptr->top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        ptr->top=-1;
        ptr->arr[ptr->top]=val;
        printf("data deleted: %d",ptr->arr[ptr->top]);
    }
}
int main()
{
    struct stack *sp;
    sp->top=-1;
    sp->size=8;
    sp->arr=(int*)malloc(sp->size*sizeof(int));
    isfull(sp,45);
    isempty(sp,45);
}