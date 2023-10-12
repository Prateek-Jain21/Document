/*Wap to input a string and print it initials*/
#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str[50];
    char s[100];
    printf("Enter The String? \n");
    gets(str);
    int a = 0;
    for(i=0;i<strlen(str);i++)
    {
         if (str[i]!=' ')
         {
            s[a++]=str[i];
         } 
         else 
         {
            printf("%c .",s[0]);
            a=0;
         }
    }
    for(i=0;i<a;i++)
    printf("%c",s[i]);
}
