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
        vector<int>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        string s;
        cin>>s;
        map<int,char>mp;
        bool flag = true;
        for(int i=0;i<n;i++)
        {
            int num = a[i];
            char c = s[i];
            if(mp.count(num)>0)
            {
                if(mp[num] != c)
                {
                    cout<<"NO\n";
                    flag = false;
                    break;
                }
            }
            mp[num] = c;
        }
        if(flag)
            cout<<"YES\n";
    }

    return 0;
}