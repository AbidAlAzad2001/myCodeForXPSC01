#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        bool flag = false;
        set<int>st;
        for(int i=n-1;i>=0;i--)
        {
            if(st.count(a[i]))
            {
                cout<<i+1<<endl;
                flag = true;
                break;
            }
            st.insert(a[i]);
        }
        if(!flag)
            cout<<0<<endl;
    }

    return 0;
}