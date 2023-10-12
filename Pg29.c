/* 
  NAME    : Prateek Jain
  SECTION : K
  ROLL NO.: 43
Write a code to remove duplicate elements in an array using function.
*/

#include<stdio.h>
int duplicate(int a[],int n);
int main() 
{ 
  int n,i,j,k;
  printf("Enter The Length Of Array \n");
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++) 
  {
     printf("Enter %d Number \n",(i+1));
     scanf("%d",&a[i]);
  }
   n = duplicate(a,n);
  printf("New Array \n");
  for(i=0;i<n;i++) 
  {
     printf("%d \n",a[i]);
     
  }
}
int duplicate(int a[], int n)
{ 
 int i,j,k;
 for(i=0;i<n;i++) 
  {
    for(j=(i+1);j<n;j++)
    {
      if(a[i]==a[j])
   {
     for(k=j;k<n;k++)
     {
     a[k]=a[k+1];
     }
    n--;
   }
  }
 }
 return n;
}

