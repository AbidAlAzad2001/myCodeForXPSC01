#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ok=1;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a.begin(),a.end());
        for(int i=1;i<n;i++)
            if(a[i]-a[i-1] == 1)
                ok = 2;
        cout<<ok<<endl;
    }

    return 0;
}