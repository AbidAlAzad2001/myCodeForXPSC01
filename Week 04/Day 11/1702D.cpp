#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int p;
        cin>>s>>p;
        int n = s.size();
        vector<pair<char,int>>v;
        int cost = 0;
        for(int i=0;i<n;i++)
        {
            v.push_back({s[i],i});
            cost+=(s[i]-96);
        }
        vector<int>a(n+1,0);
        sort(v.begin(),v.end(),[&](pair<char,int>a,pair<char,int>b){
            return a.first>b.first;
        });
        for(int i=0;i<v.size();i++)
        {
            if(cost<=p) break;
            cost -= (v[i].first-96);
            a[v[i].second] = -1;
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]!=-1)
                cout<<s[i];
        }
        cout<<endl;
    }

    return 0;
}