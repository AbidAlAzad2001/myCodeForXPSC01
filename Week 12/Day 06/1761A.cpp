#include"bits/stdc++.h"
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n;
        cin>>a>>b>>n;
        if(a == n and b == n)
            cout<<"Yes\n";
        else if(a+b<n-1)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }

    return 0;
}