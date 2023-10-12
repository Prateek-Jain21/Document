/*Arrange A String IN Alphabetical Order*/
#include <stdio.h>  
#include<string.h>
 int main()  
{   int i,j;
    char t;
    char arr[50];
    printf("Enter The String? \n");
    gets(arr);
    for (i = 0; i<(strlen(arr)-1); i++) 
    {   
        for (j = i+1; j <strlen(arr); j++) 
        {   
           if(arr[i] > arr[j])
            {  
               t = arr[i];  
               arr[i] = arr[j];  
               arr[j] = t;  
           }   
        }   
    } 
   puts(arr);  
   return 0;  
}  