#include<stdio.h>
void show();
int a[] = {1,2,3,4,5,6,7,8,9};
int main()
{
 show();
 
}
void show()
{
printf(" %d  |  %d  |  %d \n",a[0],a[1],a[2]);
printf("--------------- \n");
printf(" %d  |  %d  |  %d \n",a[3],a[4],a[5]);
printf("--------------- \n");
printf(" %d  |  %d  |  %d \n",a[6],a[7],a[8]);
}
