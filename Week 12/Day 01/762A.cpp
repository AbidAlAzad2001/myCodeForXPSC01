#include"bits/stdc++.h"
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    vector<long long>a;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0) a.push_back(i);
        if(n/i!=i) a.push_back(n/i);
    }
    sort(a.begin(),a.end());
    if(k>a.size())
        cout<<-1<<endl;
    else    
        cout<<a[k-1]<<endl;

    return 0;
}