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
        vector<int>v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        map<int,int>first;
        map<int,int>last;
        for(int i=0;i<n;i++)
        {
            if(first.find(v[i]) == first.end())
                first[v[i]] = i;
            last[v[i]] = i;
        }
        while(k--)
        {
            int x,y;
            cin>>x>>y;
            if(first.find(x) == first.end() || last.find(y) == last.end())
            {
                cout<<"NO\n";
                continue;
            }
            x = first[x];
            y = last[y];
            if(x>y)
                cout<<"NO\n";
            else
                cout<<"YES\n";
        }
    }

    return 0;
}