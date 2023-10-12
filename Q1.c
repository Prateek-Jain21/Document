#include<stdio.h>
#include<string.h>
int main()
{
    int i,max,d;
    char str[50];
    int a[26];
    printf("Enter The String?");
    gets(str);
    for(i=0;i<strlen(str);i++)
    {
        a[str[i]-65]++;
    }
    for(i=0;i<26;i++)
    {
        if(a[i]>max)
        {
        max = a[i];
        d = i;
        }
    }
    printf("%c,%d",(65+d),max);
}