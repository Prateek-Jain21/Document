#include<iostream>
using namespace std;

int main()
{
    int i, j, c;
    string s;
    cout << "Enter the String? \n";
    getline(cin, s);
    int l = s.length();

    for (i = 0; i < l; i++)
    {
        if (s[i] != ' ') 
        {
            c = 1;
            for (j = i + 1; j < l; j++)
            {
                if (s[i] == s[j])
                {
                    c++;
                    s[j] = ' ';  
                }
            }
            if (s[i] != ' ') 
            {
                cout << s[i] << c << endl;
            }
        }
    }
    return 0;
}
