/*
  NAME    : Prateek Jain
  SECTION : K
  ROLL NO.: 43

Write a menu driven program using functions that can perform the following tasks on
pressing given keys:
1. Check a number is odd or even.
3. Print reverse of a number.
4. Print sum of series 1+3+5+7+9......upto n
5. Exit
*/

#include<stdio.h>
void even();
void rev();
void sum();
int main()
{ 
  int n;
  do{
  printf("Enter The Choice? \n");
  scanf("%d",&n);
  if(n==1)
  even();
  else if(n==3)
  rev();
  else if(n==4)
  sum();
  }while(n!=5);
}
    void even()
    { int a;
      printf("Enter A Number? \n");
      scanf("%d",&a);
      if(a%2==0)
      {
        printf("Number Is Even \n");
      }
      else
      {
        printf("Number Is Odd \n");
      }
    }
    
  void rev()
  { int a,r=0;
    printf("Enter A Number? \n");
      scanf("%d",&a);
      while(a>0)
      {
        r = (r * 10) + (a%10);
        a = a/10;
      }
      printf("Reverse : %d \n",r);
  }
  void sum()
  {  int a,i,s=0;
      printf("Enter The Limit? \n");
      scanf("%d",&a);
     for(i=1;i<=a;i+=2)
     {
        s+=i;
     }
     printf(" Sum : %d \n",s);
 }