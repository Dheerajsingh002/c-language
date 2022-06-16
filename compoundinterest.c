#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,c,n;
    printf("enter the principle  balance");
    scanf("%f",&p);
    printf("enter the value of interest rate");
    scanf("%f",&r);
    printf("enter the value of time");
    scanf("%f",&t);
    printf("entrer the no of times interest");
    scanf("%f",&n);
    c=p*pow((1+r/n),n*t);
    printf("%f",c);


}