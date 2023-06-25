#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s == "yES" || s == "YES" || s == "yes" || s == "Yes" || s == "YeS" || s == "yeS" || s == "YEs" || s == "yEs")
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}