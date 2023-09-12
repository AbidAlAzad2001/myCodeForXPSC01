#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<pair<int,int>>a;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a.push_back({x,i});
        }
        sort(a.begin(),a.end());
        int x = n;
        for(int i=0;i<n;i++)
        {
            a[i].first = x;
            x--;
        }
        int ans[n];
        for(int i=0;i<n;i++)
        {
            ans[a[i].second] = a[i].first;
        }
        for(int i=0;i<n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;

    }

    return 0;
}