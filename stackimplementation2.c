#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};

int push(struct stack *ptr)
{
    if(ptr->top==ptr->size-1)
    {
        printf("stack is full");
    }
    else{
         ptr->arr[0]=30;
         ptr->top++;
         printf("%d\n",ptr->arr[0]);
    }
}
int pop(struct stack *ptr)
{
    if(ptr->top==-1)
    {
        printf("stack is full");
    }
    else{
        ptr->top--;
         printf("%d\n",ptr->arr[0]);
    }
}
int main()
{
    struct stack *s;
    s->size=90;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));
    if(push(s)){
       printf("value inserted\n");
    }
    if(pop(s))
    {
     printf("value deleted");
    }
   
}