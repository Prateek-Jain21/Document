  /*
  NAME    : Prateek Jain
  SECTION : K
  ROLL NO.: 43
  
  WAP to find roots of a quadratic equation, 
  equation is of the form (ax2+bx+c=0)*/

   #include<stdio.h>    
   #include<math.h>
   int main()
  { 
   int a,b,c;
   double d1,d2;
   printf("Enter a, b and c which are Cofficient of x^2,x,1 Respectively\n");
   scanf("%d%d%d", &a, &b, &c);
   d1 = (-b + sqrt((b*b)-(4*a*c)))/(2*a);
   d2 = (-b - sqrt((b*b)-(4*a*c)))/(2*a);
   printf("First root = %f\n", d1);
   printf("Second root = %f\n", d2);
   return 0;
  }