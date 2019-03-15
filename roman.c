#include<stdio.h>
void main()
{
char a[100];
int i;
scanf("%[^\n]",a);
for(i=0;a[i]!='\10';i++)
{
printf("%c",a[i]);
}
printf(" .");
}
