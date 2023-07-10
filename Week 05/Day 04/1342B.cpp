#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        n/=2;
        if(n==1 || n%2!=0)
            cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            for(int i=0;i<n;i++)
                cout<<2*i+2<<" ";
            for(int i=0;i<n-1;i++)
                cout<<2*i+1<<" ";
            cout<<2*(n-1)+1+n<<" ";
            cout<<endl;
        }
    }

    return 0;
}