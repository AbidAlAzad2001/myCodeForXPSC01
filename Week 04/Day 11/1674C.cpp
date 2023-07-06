#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        string s,t;
        cin>>s>>t;
        int n,m;
        n = s.size();
        m = s.size();
        if(t.size() == 1)
        {
            if(t[0]=='a')
                cout<<1<<endl;
            else
            {
                long long ans = pow(2,n);
                cout<<ans<<endl;
            }
        }
        else
        {
            if(count(t.begin(),t.end(),'a')>0)
                cout<<-1<<endl;
            else
            {
                long long ans = pow(2,n);
                cout<<ans<<endl;
            }
        }
    }

    return 0;
}