#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v[1000];
    for(int i=1;i<=1000;i++)
    {
        for(int j=1;j<=1000;j++)
        {
            if(__gcd(i,j) == 1)
            {
                v[i].push_back(j);
            }
        }
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n+1);
        for(int i=1;i<=n;i++)
            cin>>a[i];

        vector<int>mxIndex(1000,-1);

        for(int i=1;i<=n;i++)
        {
            mxIndex[a[i]] = i;
        }

        int ans = 0;
        
        for(int i=1;i<=1000;i++)
        {
            if(mxIndex[i] == -1)
                continue;
            if(i == 1)
            {
                ans = max(ans,2*mxIndex[i]);
                continue;
            }
            for(auto x: v[i])
            {
                if(mxIndex[x]!=-1)
                {
                    ans = max(ans,mxIndex[i]+mxIndex[x]);
                }
            }
        }
        if(ans == 0)
            ans = -1;
        cout<<ans<<endl;
    }

    return 0;
}