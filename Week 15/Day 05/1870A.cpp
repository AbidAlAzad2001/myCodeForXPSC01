#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x;
        cin>>n>>k>>x;
        if(min(n,x+1)<k)
            cout<<-1<<endl;
        else if(x == k)
        {
            int sum = 0;
            sum = ((k-1)*k)/2;
            n = n - x;
            sum+=n*(x-1);
            cout<<sum<<endl;
        }
        else{
            int sum = 0;
            sum = ((k-1)*k)/2;
            n = n-k;
            sum+=n*x;
            cout<<sum<<endl;
        }
    }

    return 0;
}
