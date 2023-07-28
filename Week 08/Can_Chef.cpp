#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int ans = x*15;
        int total = y*2;
        if(ans>=total)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}