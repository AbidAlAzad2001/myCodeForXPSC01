#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,b;
        cin>>n>>b;
        int ans = -1;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if((a&b)==b)
                ans&=a;
        }
        if(ans == b)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}