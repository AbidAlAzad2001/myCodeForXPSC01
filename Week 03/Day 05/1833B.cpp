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
        vector<pair<int,int>>a(n);
        vector<int>b(n),ans(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i].first;
            a[i].second = i;
        }
        for(int i=0;i<n;i++)
            cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0;i<n;i++)
        {
            ans[a[i].second] = b[i];
        }
        for(int i=0;i<n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }

    return 0;
}