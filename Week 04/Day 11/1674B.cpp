#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st = "aa";
    map<string,int>mp;
    int i = 1;
    for(st[0]='a';st[0]<='z';st[0]++)
        for(st[1]='a';st[1]<='z';st[1]++)
            if(st[0]!=st[1])
                mp[st]=i++;
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<mp[s]<<endl;
    }

    return 0;
}