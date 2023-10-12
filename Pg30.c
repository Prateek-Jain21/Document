# include<stdio.h>
main()
{
	int i,j,k,f=1;
	for(i=1;i<=5;i++)
	{
         for(k=1;k<=i;k++)
		{
			printf(" ");
		}
        for(j=i;j<=5;j++)
		{   
			printf("%d ",f);
            
		}
       if(i<3)
        f++;
        else
        f--;		
		
        printf("\n");
	}
			}