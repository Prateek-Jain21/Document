/*WAP to INput Two Strings and concatenate*/
#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,j,k,g,h;
    printf("Enter the Length of Strings respectively? \n");
    scanf("%d"&g);
    scanf("%d"&h);
    char str1[g];
    char str2[h];
    char str[g+h];
    printf("Enter First String? \n");
    gets(str1);
    printf("Enter Second String? \n");
    gets(str2);
    for(k=0;str1[k]!='\0';k++)
    {
        str[i] = str1[k];
        i++;
    }
    for(j=0;str2[j]!='\0';j++)
    {
        str[i] = str2[j];
        i++;
    }
    str[i] = '\0';
    puts(str);
}