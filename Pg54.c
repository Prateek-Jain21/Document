/*Count no of vowels,consonants,Numbers and special character in a given string!!*/
#include<stdio.h>
#include<string.h>
int main()
{
int i;
int s=0,s1=0,s2=0,s3=0;
char str[50];
printf("Enter The String?");
gets(str);
for(i=0;i<strlen(str);i++)
{   if(str[i]>64&&str[i]<91||str[i]>96&&str[i]<123)
{
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
    s++;
    else
    s1++; 
}
else if(str[i]>47&&str[i]<59)
s2++;
else
s3++;
}
printf(" No Of Vowels : %d \n No Of Consonants : %d \n No Of Digits : %d \n No Of Special Character : %d",s,s1,s2,s3);
}
