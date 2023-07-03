#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r,x;
        cin>>l>>r>>x;
        int a,b;
        cin>>a>>b;
        if(a == b)
        {
            cout<<0<<endl;
            continue;
        }
        if(abs(a-b)>=x)
            cout<<1<<endl;
        else if(b>a)
        {
            if(b+x<=r or a-x>=l)
                cout<<2<<endl;
            else if(a+x<=r and b-l>=x)
                cout<<3<<endl;
            else
                cout<<-1<<endl;
        }
        else
        {
            if(a+x<=r or b-x>=l)
                cout<<2<<endl;
            else if(b+x<=r and a-l>=x)
                cout<<3<<endl;
            else
                cout<<-1<<endl;
        }
    }

    return 0;
}