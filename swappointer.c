#include<stdio.h>
int sum(int *a ,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    printf("the value of a= %d",*a);
    printf("\n");
   
    printf("the value of a= %d",*b);
}
int main()
{

   int x,y;
   printf("enter a and b");
   scanf("%d\n%d",&x,&y);
   sum(&x,&y);  

}