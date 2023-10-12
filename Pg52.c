/* WAP To delete n characters of a string from a particular Index*/
#include<stdio.h>
#include<string.h>
int main()
{
int i,end,f,j,x,y;
char t;
char str[50];
printf("Enter The String? \n");
gets(str);
printf("Enter The No. Of Characters you want to delete and The Index from which you want to start\n?");
scanf("%d%d",&f,&x);
  for(j=0;j<f;j++)
  {
  for(i=x;i<=strlen(str);i++)
  {  
      str[i] = str[i+1];
  }
  }
  puts(str);
}