#include<stdio.h>
int greater(int *a ,int *b ,int *c)
{
    int temp;
    if(*a>*b && *a>*c)
    temp=*a;
    else if(*b>*a && *b>*c)
    temp=*b;
    else
    temp=*c;
    printf("the largest= %d",temp);
}
int main()

{
    int a,b,c;
    printf("enter three cobsecutive value \n");
    scanf("%d%d%d",&a,&b,&c);
    greater(&a,&b,&c);
    return 0;
}