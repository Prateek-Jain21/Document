#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int i,c,max,d=0;
    printf("Enter The Roman Number? \n");
    gets(s);
    int n[strlen(s)];
    for(i=0;i<strlen(s);i++)
    {
        switch(s[i])
        {
            case 'I' : n[i]=1;
                       break;
            case 'V' : n[i]=5;
                       break;
            case 'X' : n[i]=10;
                       break;
            case 'L' : n[i]=50;
                       break;
            case 'C' : n[i]=100;
                       break;
            case 'D' : n[i]=500;
                       break;
            case 'M' : n[i]=1000;
                       break;
        }
    }
    max = n[0];
    for(i=1;i<strlen(s);i++)
    {
        if(max<n[i])
        {
          max = n[i];
          c =  i;
        }
    }
    for(i=0;i<strlen(s);i++)
    {
        if (i<c||n[i]<n[i+1])
        d-=n[i];
       else
        d+=n[i];
        
    }
printf("%d",d);
}
