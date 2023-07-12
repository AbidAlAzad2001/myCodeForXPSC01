#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,n,b;
        cin>>n>>a>>b;
        string s;
        char ch = 'a';
        int cnt = 1;

        for(int i=1;i<=n;i++,cnt++)
        {
            s.push_back(ch);
            ch++;
            if(cnt == b)
            {
                cnt = 0;
                ch = 'a';
            }
            if(ch>'z')
                ch = 'a';
        }
        cout<<s<<endl;
    }

    return 0;
}