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
        int mn = INT_MAX;
        int ans = 0;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]>mn)
                ans++;
            mn = min(mn,a[i]);
        }
        cout<<ans<<endl;
    }

    return 0;
}