# include<stdio.h>
# include<string.h>
int main()
{
	char str[50],a[50];
	int i,j,count,f,l,k=0,n=0,x;
    char p,q;
	printf("Enter The string:");
	gets(str);
	l=strlen(str);
	for(i=0;i<l;i++)
	{
	    a[i]=0;
	    count=1;
		for(j=i+1;j<l;j++)
    {
		if(str[i]==str[j])
		{
			count++;
        }
	}
        if(i==0)
            f=count;
		 a[i]=count;
		if(count>=k)
		{
		   k=count;
           p=str[i];
		}
        if(count<=f)
        {
           f=count;
           q=str[i];
        }
    }

    for(j=0;j<l;j++)
	{
        if(str[j]==p)
		   str[j]=q;
        else if(str[j]==q)
           str[j]=p;
    }
    puts(str);   
}