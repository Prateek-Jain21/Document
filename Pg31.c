/*
 Input n numbers in an array and find the nearest lesser and nearest greater element than a given element.
Example: a[] ={ 3,6,2,1,8,6,3,4,10,15]
Let input x= 8
Output: nearest lesser 6 nearest greater 10
*/
#include<stdio.h>
int main()
{
    int n,i,a,b,l,d=0,g=0,j;
    printf("Enter the Number of Elements Required \n");
    scanf("%d",&n);
    int ar[n];
    printf("Enter the Elements \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("Enter the Element ");
    scanf("%d",&d);
    a=d-1;
    b=d+1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
          if(ar[j]==a)
          {
           l=ar[j];
           break;
          }  
         if(ar[j]==b)
         {
            g=ar[j];
            break;
         }
       }
        a--;
        b++;
        
    }
    printf("Nearest Lesser %d \n",l);
    printf("Nearest Greater %d \n",g);
}