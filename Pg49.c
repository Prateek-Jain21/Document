#include<stdio.h>
#include<string.h>
int main()
{
int i,end,f=1;
char t;
char str[50];
char str1[50];
printf("Enter The String?");
gets(str);
end=strlen(str)-1;
for(i=0;i<strlen(str);i++)
{
    str1[i]=str[end];
    end--;
}
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
if(f==1)
printf("Palindrome!");
else
printf("Not Palindrome!");
}
