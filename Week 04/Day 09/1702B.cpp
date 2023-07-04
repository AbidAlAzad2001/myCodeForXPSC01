#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int n = s.size();
        int ans = 1;
        set<int>st;
        for(int i=0;i<n;i++)
        {
            st.insert(s[i]);
            if(st.size()>3)
            {
                ans++;
                st.clear();
                st.insert(s[i]);
            }
        }
        cout<<ans<<endl;
    }
    

    return 0;
}