/*WAP to input two string and check analag or not*/
#include<stdio.h>
#include<string.h>
int main()
{
int i,j,f,l=1;
char str1[50];
char str2[50];
printf("Enter The Strings? \n");
gets(str1);
gets(str2);
if(strlen(str1)==strlen(str2))
{
for(j=0;j<=strlen(str1);j++)
  { 
    f=0;
    for(i=0;i<strlen(str2);i++)
    {
        if(str1[j]==str2[i])
        {
            f=1;
        }
        if(f==0)
        l=0;
    }
  }
}
else
l=0;
if(l==0)
printf("The Words Are Not Anagram");
else 
printf("The Words Are Anagram");
}

