#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;

};
int isempty(struct stack *ptr)
{
    if(ptr->top==-1)
    {
      return 1;
    }
    else{
        return 0;
    }
}
int isfull(struct stack *ptr)
{
    if(ptr->top==ptr->size-1)
    {
         return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    struct stack *s;
    s->size=4;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));
    for(int i=0;i<s->size;i++){
    s->arr[0]=20;
    s->top++;
    }

    if(isempty(s)){
     printf("stack is empty\n");
    }
    else{
        printf("stack is not empty\n");
    }
    if(isfull(s))
    {
      printf("stack is full\n");
    }
    else
    {
        printf("stack is not full\n");
    }
}
