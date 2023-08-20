#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
void solve()
{
    int n;
    cin>>n;
    int ans = -1;
    for(int i=1; i<=n; i++)
    {
        for(int pi=1; pi<=n; pi++) 
        {
            int maxi = i*pi;
            vector<int>all;
            int cur = 0;
            int cost = 0;
            for(int index=n; index>=1; index--) 
            {
                int limit = maxi / index;
                while(cur < limit && cur <n)
                {
                    cur++;
                    if(cur != pi)
                    {
                        all.push_back(cur);
                    }
                }
                if(index==i)
                    continue;
                if(all.empty())
                {
                    cost= -1;
                    break;
                }
                cost += (index * all.back());
                all.pop_back();
            }
            ans = max(ans, cost);
        }
    }
    cout<<ans<<"\n";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}