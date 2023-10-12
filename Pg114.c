#include<stdio.h>
int main()
{
    int n,i,s=0;
    printf("Enter The Number of terms you want in Array? \n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter %d th Element :- \n");
        scanf("%d",&a[i]);
        s+=a[i];
    }
     

}