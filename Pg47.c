#include<stdio.h>
#include<string.h>
int main()
{
int i,end,f=1;
char t;
char str[50];
char str1[50];
printf("Enter The Strings? \n");
gets(str);
gets(str1);
if(strlen(str)==strlen(str1))
{
for(i=0;i<strlen(str);i++)
{
  if(str[i]!=str1[i])
  {
    f = 0;
  }
}
}
else
f=0;
printf("%d",f);
}
