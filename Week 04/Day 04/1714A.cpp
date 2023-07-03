#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,h,m;
        cin>>n>>h>>m;
        int time;
        time = 60 * h + m;
        int ans = 60 * 24;
        while(n--)
        {
            int a,b;
            cin>>a>>b;
            int t  = 60 * a + b - time;
            if(t < 0)
                t+=24 * 60;
            ans = min(ans , t);
        }
        cout<<ans/60<<" "<<ans%60<<endl;
    }

    return 0;
}