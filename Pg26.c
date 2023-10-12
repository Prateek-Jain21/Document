/*
  NAME    : Prateek Jain
  SECTION : K
  ROLL NO.: 43

 Input n elements in an array and organize them
 in descending order using a sorting technique.
 
 */
 #include <stdio.h>  
    int main()  
 {  int n,i,t,j;
    printf("Enter The Length Of Array? \n");
    scanf("%d",&n);
    int arr[n];
    for (i = 0; i < n; i++)
    {   
        printf("Enter Element At %d Place :",(i+1));  
        scanf("%d",&arr[i]);
    } 
       
    for (i = 0; i < n; i++) 
    {   
        for (j = i+1; j < n; j++) 
        {   
           if(arr[i] < arr[j])
            {  
               t = arr[i];  
               arr[i] = arr[j];  
               arr[j] = t;  
           }   
        }   
         }  
    printf("\n");  
   
    printf("Elements of array sorted in descending order: \n");  
    for (i = 0; i < n; i++) {   
        printf("%d ", arr[i]);  
    }  
    return 0;  
}  