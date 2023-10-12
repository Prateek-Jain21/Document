#include<stdio.h>
#include<string.h>
int main()
{    char *p = "Hello";
     char s1[] = "Hello";
     char *q = s1;
     puts(p);
     puts(q);
     s1[0]='M';
     *(q+1) = 'I';
     *p = "S";
     puts(p);
     puts(q);
 }