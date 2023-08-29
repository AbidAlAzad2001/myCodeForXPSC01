#include"bits/stdc++.h"
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
        bool flag = false;
        for(int i=0;i<n;i++)
        {
            for(int j=i+2;j<n;j++)
            {
                if(a[i] == a[j])
                    flag = true;
            }
        }
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}