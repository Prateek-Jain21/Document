/*
 0123210
0 4444444 
1 4333334
2 4322234 
3 4321234 
2 4322234 
1 4333334 
0 4444444
*/

#include<stdio.h>
int main()
{
    int n,i,j,a,b,k;
    int ar[5][5];
    printf("Enter THE Limit?");
    scanf("%d",&n);
    a=0;
    b=(n*2)-1;
    while(n!=0)
    {
    for(i=a;i<=b;i++)
    { 
        for(j=a;j<=b;j++)
        { 
            if(i==a||j==a||i==b||j==b)
            {
            ar[i][j]=n;
            }
        }
    }
            a++;
            b--;
            n--;
}
for(i=0;i<a;i++)
{for(j=0;j<a;j++)
{
    printf("%d",ar[i][j]);

}
printf("\n");
}
}