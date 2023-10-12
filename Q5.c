#include<stdio.h>
int Rev(int *);
int main()
{
    int n;
    printf("Enter The Number You want To Check?");
    scanf("%d",&n);
    int *p = &n;
    if(*p==Rev(p))
    printf("Palindrome Number");
    else
    printf("Not Palindrome Number");

}
int Rev(int *p)
{   int s = 0;
    while(*p!=0)
    {
        s=(s*10)+(*p%10);
        *p=*p/10;
    }
    return s;
}