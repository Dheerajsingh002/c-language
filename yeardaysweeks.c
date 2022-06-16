#include<stdio.h>
int main()
{
int days,year,weeks;
printf("enter the days");
scanf("%d",&days);
year=days/365;
weeks=(days%365)/7;
days=days-((year*365)+(weeks*7));
printf("%d\n",year);
printf("%d\n",weeks);
printf("%d\n",days);
}