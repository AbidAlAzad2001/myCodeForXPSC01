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
        bool flag = false;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<1)
                flag = true;
        }
        if(flag){
            cout<<"NO\n";
        }
        else
        {
            for(int i=0;i<n-2;i++)
            {
                if((a[i]+a[i+2])%2 != 0)
                    flag = true;
            }
            if(flag)
                cout<<"NO\n";
            else
                cout<<"YES\n";
        }
    }

    return 0;
}