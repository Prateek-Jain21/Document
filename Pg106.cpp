#include <iostream>
using namespace std;
void Fib(int n)
{   int t1,t2,t3=0,i;
    t1=0;
    t2=1;
    cout<< t1 << endl;
    for (i = 2; i <= n; i++)
   {
    t1 = t2;
    t2 = t3;
    t3 = t1 + t2;
    cout<< t3 << endl;
   }
}
int main() 
{ 
  int n,i,j,k;
  cout<<"Enter The Number of term you want from fibonnaci Series?" << endl;
  cin >> n;
  Fib(n); 
}
