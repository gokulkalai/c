#include<stdio.h>
#include<sring.h>
int main()
{
char a[100], b;
int i,j=0;
prntf("enter  the string :");
  gets(a);
  
  i=0;
  j=strlen(a)-1;
  while (i<j){
    b=a[i];
    a[i]=a[j];
    a[j]=b;
    i++;
    j--;
  }
  
  printf("revrese string is:%s",a);
  retrn 0;
}
