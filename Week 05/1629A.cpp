#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<pair<int ,int>>v(n);
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v[i].first = x;
        }
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v[i].second = x;
        }
        sort(v.begin(),v.end());
        long long ans = k;
        for(int i=0;i<n;i++)
        {
            if(v[i].first<=ans)
            {
                ans+=v[i].second;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}