/*
  NAME    : Prateek Jain
  SECTION : K
  ROLL NO.: 43

Input n characters in an array and replace the characters as per the given instructions:
1. Replace all capital vowels with symbol $.
2. Replace all the capital consonant with symbol #.
3. Replace all small letter vowels with symbol *.
4. Replace all the small letter consonant with symbol +.
5. Relace all special symbols with spaces.
6. Replace all spaces with digit 5.
7. Replace all digits with @
*/
#include<stdio.h>
int main() 
{ 
  int n,i;
  printf("Enter The Length Of Array \n");
  scanf("%d",&n);
  char a[n];
  for(i=0;i<n;i++) 
  {
     printf("Enter %d Element \n",(i+1));
     scanf("%s",&a[i]);
  }
  for(i=0;i<n;i++)
  {
     if(a[i]>='A'&&a[i]<='Z')
   {
    if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
    a[i]='$';
    else
    a[i]='#';
   } 
   else if(a[i]>='a'&&a[i]<='z')
   {
    if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
    a[i]='*';
    else
    a[i]='+';
   }
   else if(a[i]==32)
   a[i]='5';
   else if(a[i]>='!'&&a[i]<=')')
   a[i]='@';
   else
   a[i]=' ';
  }
  printf("New Array ");
  for(i=0;i<n;i++) 
  { 
     printf("%c \n",a[i]);
  }
}