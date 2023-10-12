#include <iostream>
using namespace std;
int palindrome(string s)
{
    int l = s.length();
    int m = l-1;
    int i,f = 1;
    for(i=0;i<l/2;i++,m--)
    {
        if(s.at(i)!=s.at(m))
        {
            f=0;
        }
        
    }
    return f;
    
}
int main()
{
    string s;
    cout<< "Enter The String You want to check for palindrome?" << endl;
    getline(cin,s);
    if(palindrome(s))
    {
        cout<< "Given String is Palindrome!" << endl;
    }
    else
    {
        cout << "Given String is Not Palindrome!" << endl;
    }
}