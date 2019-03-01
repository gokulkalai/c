#include<stdio.h>
main()
{
char a[100];
int i;
scanf("%d\n",a);
for(i=0;a[i]!='0';i++)
{
printf("%c",a[i]);
}
printf(" . ");
return 0;
}
