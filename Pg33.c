/*
  NAME    : Prateek Jain
  SECTION : K
  ROLL NO.: 43


Input a matrix of order m x n and print the square of elements in principal diagonal
and cubes of secondary diagonal.
*/
#include<stdio.h>
int main()
{ 
  int i,j,r,c,s=0,s1=0,k;
  printf("Enter The No. Of Rows And Columns Of Array \n");
  scanf("%d%d",&r,&c);
  int a[r][c];
  for(i=0;i<r;i++) 
{
    for(j=0;j<c;j++)
{   
    printf("Enter The Element at %d Row And %d Column \n",(i+1),(j+1));
    scanf("%d",&a[i][j]);
}
}
printf("Square Of Elements OF Principle Diagonal is :");
for(i=0;i<r;i++) 
{ 
    for(j=0;j<c;j++)
 {  
     if(i==j)
   {
    printf("%d \t",(a[i][j]*a[i][j]));
   } 

   
 }
}

printf(" \n");
printf("Cube Of Elements OF Secondary Diagonal is :");

for(i=0;i<r;i++) 
{ 
    for(j=0;j<c;j++)
 { 
    if((i+j)==(c-1))
   {
     printf("%d \t",(a[i][j]*a[i][j]*a[i][j]));
   }
}
}
}
