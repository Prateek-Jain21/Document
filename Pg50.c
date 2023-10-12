#include<stdio.h>
#include<string.h>
int main()
{
int i,end,f;
char t;
char str[50];
int str1[]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
printf("Enter The String?");
gets(str);
for(i=0;i<strlen(str);i++)
{   
    if(str[i]>96&&str[i]<123)
{
    str[i]-=32;
}
    str1[str[i]-65]++;
}
for(i=0;i<27;i++)
{   
    if(str[i]>0)
    {
    printf("%c : %d \n",(i+65),str1[i]);
    }
}
}
