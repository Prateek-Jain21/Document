
#include<iostream>
using namespace std;
int main()
{   int n,m,i,j,f=0,c=0;
    string s;
    cout<< "Enter the String? \n";
    getline(cin,s);
    cout<< "Enter Two Indices of the words you want to change? \n";
    cin>>n>>m;
    s = s + " ";
    for(i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            c++;
            if(c==n||c==m)
            {
                for(j=f;j<i;j++)
                {
                    s[j]+=1;
                    if(s[j]>122)
                    {
                        s[j]-=26;
                    }
                }

            }
            f=i+1;
        }
    }
    cout<<s;
}
    
        