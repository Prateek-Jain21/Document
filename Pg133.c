#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int calPoints(char **op, int operationsSize) {
    unsigned int a[operationsSize];
    int i,c,s = 0, j = 0;
    
    for (i = 0; i < operationsSize; i++)
    {
        if (isdigit(*op[i]))
         {
          
          a[j++] = *op[i]-'0';
        } else if (*op[i] == 'C') 
        {
            if (j > 0) 
            {  
                j--;
                a[j]=0;
            }
        } else if (*op[i] == 'D') 
        {
            if (j > 0) 
            {
                a[j] =  a[j-1] * 2;
                j++;
            }
        } else if (*op[i] == '+') 
        {
            if (j > 1) 
            {
                a[j] = a[j - 1] + a[j - 2];
                j++;
            }
        }
    }
    for (i = 0; i < j; i++) 
    {
        s += a[i];
    }
    
    return s;
}
int main() 
{
    char *op[] = {"5","-2","4","C","D","9","+","+"};
    int operationsSize = 5;
    int result = calPoints(op, operationsSize);
    printf("Total points: %d\n", result);
    return 0;
}
