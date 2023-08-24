#include"bits/stdc++.h"
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        char x  = '0';
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='?') s[i] = x;
            x = s[i];
        }
        cout<<s<<endl;
    }

    return 0;
}