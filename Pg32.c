 /*
  NAME    : Prateek Jain
  SECTION : K
  ROLL NO.: 43


Input a matrix of order m x n. Print the sum of all the odd elements present in each
row and all the odd elements present in each column.
*/

#include<stdio.h>
int main()
{ 
  int i,j,r,c,s,s1,k;
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
for(i=0;i<r;i++) 
{ s=0;
  s1=0;
    for(j=0;j<c;j++)
{   if (a[i][j]%2!=0)
{
    s+=a[i][j];

}
}
for(k=0;k<r;k++)
{   
    if(a[k][i]%2!=0)
    s1+=a[k][i];
}


printf("Sum of %d Row : %d \n",(i+1),s);
printf("Sum Of %d Column : %d \n",(i+1),s1);
}

}