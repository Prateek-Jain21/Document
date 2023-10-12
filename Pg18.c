  /*
  NAME    : Prateek Jain
  SECTION : K
  ROLL NO.: 43
  
  
  
  Write a C program to input electricity unit and calculate total electricity bill according to the given condition.
  for first 50 units Rs 0.50 per unit
  For next 100 units Rs 0.75 per unit
  For next 100 units Rs 1.20 per unit
  For unit above 250 Rs 1.50 per unit
  An additional surcharge of 20% of bill is added.*/


    #include<stdio.h>
    int main()
   { 
    int a;
    double amt;
    printf("Enter Electricity Units Consumed\n");
    scanf("%d",&a);
     if(a <= 50)
     {
         amt = a * 0.50;
     }
     else if(a <= 150)
     {
         amt = 25 + ((a-50) * 0.75);
     }
     else if(a <= 250)
     {
         amt = 100 + ((a-150) * 1.20);
     }
     else
     {
           amt = 220 + ((a-250) * 1.50);
     }

     amt+=0.2*amt;

     printf("Electricity Bill = Rs %f\n", amt);

     return 0;
}
