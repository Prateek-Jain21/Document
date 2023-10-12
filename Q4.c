#include<stdio.h>
#include<stdlib.h>
int search(int *,int);
void replace(int *,int);
int main()
{
int n,x,i;
printf("Enter The Size Of Array? \n");
scanf("%d",&n);
int *p = (int *)malloc((n*sizeof(int)));
for(i=0;i<n;i++)
{
    printf("Enter The %d Element:",(i+1));
    scanf("%d",(p+i));
}
x = search(p,n);
if(x>0)
printf("Found At Index : %d \n",x);
else
printf("Not Found \n");
replace(p,x);
printf("Array After Searched Element is Replaced \n");
for(i=0;i<n;i++)
{
    printf("%d \n",*(p+i));
}
}
int search(int *p,int n)
{
    int s,i,i2=0;
    printf("Enter The Element you want to search?\n");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(*(p+i)==s)
        i2 = i;
    }
       return i2;
}
void replace(int *p,int n)
{
    *(p+n) = (*(p+n))*(*(p+n))*(*(p+n));
}