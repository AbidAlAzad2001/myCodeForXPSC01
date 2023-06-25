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
        string s;
        cin>>s;
        vector<int>a(26,0),b(26,0);
        for(int i=0;i<n;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
                a[s[i]-'A']++;
            else
                b[s[i]-'a']++;
        }
        int ans = 0;
        for(int i=0;i<26;i++)
        {
            int c = min(a[i],b[i]);
            ans+=c;
            a[i]-=c; b[i]-=c;
            int val = min(k,max(a[i],b[i])/2);
            k-=val; ans+=val;
        }
        cout<<ans<<endl;
    }

    return 0;
}