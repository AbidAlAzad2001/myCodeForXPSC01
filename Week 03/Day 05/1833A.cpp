#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        set<string> st;
        int n;
        cin >> n;
        string s;
        cin >> s;
        // string s1 = "";
        for (int i = 1; i < n; i++)
        {
            st.insert(s.substr(i-1,2));
        }
        cout<<st.size()<<endl;
    }

    return 0;
}