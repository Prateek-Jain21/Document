#include<stdio.h>
#include<string.h>
int main()
{
int i, end,f;
char t;
char str[50];
printf("Enter The String?");
gets(str);

for(i=0;i<strlen(str);i++)
{
    if(str[i]>64&&str[i]<91)
    {
        str[i]+=32;
    }
    else if(str[i]>96&&str[i]<123) 
    {
       str[i]-=32;
    }
}
puts(str);
}
