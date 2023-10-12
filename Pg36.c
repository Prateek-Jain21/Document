
/* Name	: Nitya University Roll No. : 2022045 Section	: K
18.	Write a user defined code to input 10 elements in an array (all distinct). Pass this array to the function and find the sum of first three smallest and first three largest elements present in the array. Compare the sum and return the smallest sum to calling function. Print the result.
*/


#include<stdio.h> 
int  sum(int arr[]); 
int main()
{

int arr[10],i,j; printf("************INPUT18*************\n\n"); for(i=0;i<10;i++)
{

printf("Enter num %d: ",i+1); scanf("%d",&arr[i]);
}

for(i=0;i<10;i++)

{

for(j=0;j<10-i-1;j++)

{

if(arr[j]>arr[j+1])

{

int temp=arr[j]; arr[j]=arr[j+1];
 

arr[j+1]=temp;

}

}

}

printf(“ %d”,sum(arr));
}

int  sum(int arr[10])

{

int sums,suml,a;
 printf("************OUTPUT18*************\n\n"); 
 sums=arr[0]+arr[1]+arr[2];
suml=arr[7]+arr[8]+arr[9];

     a = ((sums<suml)?sums:suml)     

    return a;
} 

