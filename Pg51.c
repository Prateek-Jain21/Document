/*Insert A Substring Into A String*/
#include<stdio.h>
#include<string.h>
int main()
{
int i,f,j,x,y;
char t;
char str[50];
char str1[50];
printf("Enter The Main String? \n");
gets(str);
printf("Enter The Substring? \n");
gets(str1);
x=strlen(str);
y=strlen(str1);
printf("Enter the position at which you want to enter the string?");
scanf("%d",&f);
  for(i=x;i>=f;i--)
  {  
      str[i+y] = str[i-1];
  }
j=0;
for(i=f;i<x+y;i++)
{
    if(j<y)
    {
    str[i] = str1[j];
    j++;
   }
}
puts(str);

}
