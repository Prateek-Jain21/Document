#include <iostream>
using namespace std;
int main()
{
    string s;
    int l,i,u=0,lo=0,v=0,d=0,sp=0;
    char ch;
    cout<< "Enter The String You want to check" << endl;
    getline(cin,s);
    l = s.length();
    for(i=0;i<l;i++)
    {
        ch = s.at(i);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            v++;
        }
        if(ch>='A' && ch<='Z')
        {
            u++;
        }
        else if(ch>='a' && ch<='z')
        {
            lo++;
        }
        else if(ch>='0' && ch<='9')
        {
            d++;
        }
        else
        {
            sp++;
        }
        
    }
    cout<<"No. Of Vowel =" << v << endl;
    cout<<"No. Of Upper Case =" << u << endl;
    cout<<"No. Of Lower Case =" << lo << endl;
    cout<<"No. Of Digits =" << d << endl;
    cout<<"No. Of Special Character =" << sp << endl;
}
