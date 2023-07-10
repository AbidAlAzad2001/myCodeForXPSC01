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
        if(n == 1 || n == 2)
            cout<<0<<endl;
        else if(n%2 == 0)
        {
            n = (n/2)-1;
            cout<<n<<endl;
        }
        else
        {
            n = n/2;
            cout<<n<<endl;
        }
    }

    return 0;
}