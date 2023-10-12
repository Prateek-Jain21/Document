#include<stdio.h>

int main() 
{ 
  int i,n,x,l,g;
  printf("Enter The Length Of Array");
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++) 
  { 
     printf("Enter %d Number\n",i);
     scanf("%d", &a[i]);
  }
printf("Enter The  Number?\n");
scanf("%d",&x);
l = a[0];
g = a[0];
for(i=0;i<n;i++) 
  { if(l<x&&l<a[i]&&l!=a[i])
    l = a[i];
  
  }
  printf("%d\n",l);
}
