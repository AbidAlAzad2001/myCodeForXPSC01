#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s1 = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
    while(t--)
    {
        string s;
        cin>>s;
        if(s1.find(s) != string::npos)
        cout<<"YES\n";
        else
        cout<<"NO\n";
        // cout<<s1.find(s)<<endl;
    }

    return 0;
}