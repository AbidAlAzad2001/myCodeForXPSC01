#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,n;
        cin>>n>>k;
        string s;
        cin>>s;
        int cnt = 0;
        int w = 0,b=0;
        int ans = INT_MAX;
        for(int i=0;i<n;i++)
        {
            cnt++;
            if(s[i]=='W') w++;
            if(s[i]=='B') b++;
            if(cnt>=k)
            {
                if(s[i-k]=='B') b--;
                if(s[i-k]=='W') w--;
                ans = min(ans,w);
                cnt--;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}