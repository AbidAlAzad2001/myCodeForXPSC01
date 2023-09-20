#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<ll>a(n);
    set<ll>s;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }
    ll ans =LLONG_MAX;
    for(auto it=s.begin();it!=s.end();it++)
    {
        ll cnt = 0;
        for(ll i=0; i<n;i++)
        {
            if(a[i]!=*it)
            {
                cnt++;
                i+=k;
                i--;
            }
        }
        ans = min(ans,cnt);
    }
    cout<<ans<<endl;
}

int main()
{
    int t;
    t = 1;
    cin>>t;
    while(t--)
        solve();

    return 0;
}