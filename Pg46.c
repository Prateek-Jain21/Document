#include<stdio.h>
#include<string.h>
int main()
{
int i, end,f;
char t;
char str[50];
printf("Enter The String?");
gets(str);
end=strlen(str);
end--;
for(i=0;i<(strlen(str)/2);i++,end--)
{
    t = str[end];
    str[end] = str[i];
    str[i] = t;
}
puts(str);
}
