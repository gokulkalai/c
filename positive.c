#include<stdio.h>
int main()
{
int a;
printf("enter the values:");
scanf("%d",&a);
if(a<0)
{
printf("negative");
}
else
{
printf("positive");
}
if(a==0)
{
printf("zero");
}
return 0;
}
