#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        vector<int>a(n+1,0);
        for(int i=1;i<=n;i++)
            cin>>a[i];
        vector<long long >pres(n+2,0);
        for(int i=1;i<=n;i++)
            pres[i] = a[i]+pres[i-1];
        vector<long long>ans(q);
        vector<pair<long long,int>>k(q);
        for(int i=0;i<q;i++)
        {
            cin>>k[i].first;
            k[i].second = i;
        }
        sort(k.begin(),k.end());
        int ap = 0;
        for(int i=0;i<q;i++)
        {
            while(true)
            {
                if(ap == n or a[ap+1]>k[i].first) 
                break;
                ap++;
            }
            ans[k[i].second] = pres[ap];
        }
        for(int i=0;i<q;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }

    return 0;
}